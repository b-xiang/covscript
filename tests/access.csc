using system
struct foo
    var b={"Hello!"}
end
var a={new foo}
out.println(a[0].b[0].cut(1).append(",World!"))