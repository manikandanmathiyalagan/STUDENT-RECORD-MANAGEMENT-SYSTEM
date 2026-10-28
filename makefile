out: main.o add_studentt.o print.o modify.o search_by_name.o search_by_roll.o search_by_mark.o sort.o sort_by_roll.o sort_by_name.o sort_by_mark.o delete_node.o delete_all.o save.o delete.o delete_name.o exit.o 
	cc main.c add_studentt.c print.c modify.c search_by_name.c search_by_roll.c search_by_mark.c sort.c sort_by_roll.c sort_by_name.c sort_by_mark.c delete_node.c delete_all.c save.c delete.c delete_name.c exit.c -o out

main.o: main.c
	cc -c main.c
add_studentt.o: add_studentt.c
	cc -c add_studentt.c
modify.o: modify.c
	cc -c modify.c
search_by_roll.o: search_by_roll.c
	cc -c search_by_roll.c
search_by_name.o: search_by_name.c
	cc -c search_by_name.c
search_by_mark.o: search_by_mark.c
	cc -c search_by_mark.c
print.o: print.c
	cc -c print.c
sort.o: sort.c
	cc -c sort.c
sort_by_roll.o: sort_by_roll.c
	cc -c sort_by_roll.c
sort_by_name.o: sort_by_name.c
	cc -c sort_by_name.c
sort_by_mark.o: sort_by_mark.c
	cc -c sort_by_mark.c
delete.o: delete.c
	cc -c delete.c
delete_name.o: delete_name.c
	cc -c delete_name.c
delete_node.o: delete_node.c
	cc -c delete_node.c
delete_all.o: delete_all.c
	cc -c delete_all.c
save.o: save.c
	cc -c save.c
exit.o: exit.c
	cc -c exit.c
