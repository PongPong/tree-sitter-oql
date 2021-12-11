# tree-sitter-oql

OQL grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter). For OQL, see [tree-sitter-oql][https://github.com/pongpong/tree-sitter-oql].

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[tree-sitter-oql]: https://github.com/PongPong/tree-sitter-oql

## Samples

### Object queries

```sql
SELECT primaryObjectReference FROM primaryObject
[WHERE conditionExpression] [LIMIT number_of_rows] [OFFSET start_index]
SELECT <Parent Object>.<Parent to Child Relationship Name>
FROM <Parent Object> SELECT <Child Object>.<Child to Parent Relationship Name> FROM <Child Object>
```

### Fields query:

```sql
SELECT fieldList from primaryObject [WHERE conditionExpression] [LIMIT number_of_rows] [OFFSET start_index]
```

### Special usage:

-   LIMIT - Limit can be used to limit the number of rows that will be returned in the query. For example, the following query will return the first 100 Contact objects with the Contact first name populated.

```sql
SELECT Contact.Name.First FROM Contact LIMIT 100;
```

-   OFFSET - Offset can be used to specify the offset or start index for the returned results. For example, the following query will return the first 100 contacts beginning at the 101 entry.

### Relationship Queries:

Relationship queries are defined to help navigate between related objects, serving as a shortcut for performing two selects during query operations. Relationships can chained by adding a dot (.) followed by the appropriate relationship name. 

For example, the query below starts at Incident, goes to Organization, then goes to Contact to list the last names of all contacts for the organization to which the incident belongs.

### Query Custom objects:

Custom objects can be queried through Connect Web Services for SOAP in a similar fashion to the primary Oracle Service Cloud objects. The syntax used to query custom object data is as follows: 

Package.ObjectName in the SELECT clause and Package.ObjectName in the FROM clause. 
For example, if there were a CO package and an RMA object, the query would be this:

```sql
SELECT CO.RMA FROM CO.RMA;
```

Examples:

```sql
-- Search all Contact objects:
SELECT Contact FROM Contact;
```

```sql
-- Search an Incident object from incident with 1D=7:
SELECT Incident FROM Incident I WHERE I.ID = 7;
```

```sql
-- Search a field in Name sub-object in Contact object:
SELECT C.Name.First FROM Contact C;
```

```sql
-- Search a field in Name sub-object in Contact object with WHERE clause:
SELECT C.Name.First FROM Contact C WHERE C.Name.First like 'C%';
```

## BNF Grammar

```
select­query ::= SELECT class­reference [class­joined] [WHERE expression]
class­reference ::= name [AS name]
class­joined ::= JOIN class­reference ON name.name = name.id
name ::= string | `string`
expression ::=
scalar
| expression operator expression
| (expression)
scalar ::= number | ‘string’ | “string” | column
operator ::= AND | OR | = | <> | != | > | >= | < | <= | LIKE | NOT LIKE
column ::= name | name.name
```
