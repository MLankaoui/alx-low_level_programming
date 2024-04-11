#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if table == 0
	{
		return (NULL);
	}
	table->size = size;
	table->count = 0;
	table->buckets = (hash_bucket_t *)malloc(sizeof(hash_bucket_t) * size);
	if table->buckets == 0
	{
		free(table);
		return (NULL);
	}
	return (table);
}
