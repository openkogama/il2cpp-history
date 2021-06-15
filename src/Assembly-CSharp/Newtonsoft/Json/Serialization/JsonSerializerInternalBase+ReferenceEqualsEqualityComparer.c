
/* Boolean System.Collections.Generic.IEqualityComparer<object>.Equals(Object, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     JsonSerializerInternalBase+ReferenceEqualsEqualityComparer::
     JsonSerializerInternalBase_ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparer_object__Equals
               (JsonSerializerInternalBase_ReferenceEqualsEqualityComparer *this,Object *x,Object *y
               ,MethodInfo *method)

{
  return x == y;
}


/* Int32 System.Collections.Generic.IEqualityComparer<object>.GetHashCode(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
        JsonSerializerInternalBase+ReferenceEqualsEqualityComparer::
        JsonSerializerInternalBase_ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparer_object__GetHashCode
                  (JsonSerializerInternalBase_ReferenceEqualsEqualityComparer *this,Object *obj,
                  MethodInfo *method)

{
  iVar1 = MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_GetHashCode
                    ((FileData *)obj,(MethodInfo *)0x0);
  return iVar1;
}

