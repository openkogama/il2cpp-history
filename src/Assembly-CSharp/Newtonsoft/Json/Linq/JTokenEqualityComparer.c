
/* Boolean Equals(JToken, JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenEqualityComparer::
     JTokenEqualityComparer_Equals
               (JTokenEqualityComparer *this,JToken *x,JToken *y,MethodInfo *method)

{
  if (x == y) {
    return 1;
  }
  if ((x != (JToken *)0x0) && (y != (JToken *)0x0)) {
    bVar1 = (*(x->klass->vtable).__unknown_1.methodPtr)(x,y,(x->klass->vtable).__unknown_1.method);
    return bVar1;
  }
  return 0;
}


/* Int32 GetHashCode(JToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenEqualityComparer::
        JTokenEqualityComparer_GetHashCode
                  (JTokenEqualityComparer *this,JToken *obj,MethodInfo *method)

{
  if (obj != (JToken *)0x0) {
    iVar1 = (*(obj->klass->vtable).__unknown_5.methodPtr)
                      (obj,(obj->klass->vtable).__unknown_5.method);
    return iVar1;
  }
  return 0;
}

