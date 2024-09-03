
/* String <Guids>b__19_0(String,
   KeyValuePair`2[MV.WorldObject.IntVector,ChunkInstances+ChunkInstanceVariables]) */

String * Assembly-CSharp.dll::ChunkInstances+<>c::ChunkInstances_c__Guids_b__19_0
                   (ChunkInstances_c *this,String *current,
                   KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                   keyValuePair,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  GStack_1._a = keyValuePair.value.guid._a;
  GStack_1._b = keyValuePair.value.guid._b;
  GStack_1._c = keyValuePair.value.guid._c;
  GStack_1._d = keyValuePair.value.guid._d;
  GStack_1._e = keyValuePair.value.guid._e;
  GStack_1._f = keyValuePair.value.guid._f;
  GStack_1._g = keyValuePair.value.guid._g;
  GStack_1._h = keyValuePair.value.guid._h;
  GStack_1._i = keyValuePair.value.guid._i;
  GStack_1._j = keyValuePair.value.guid._j;
  GStack_1._k = keyValuePair.value.guid._k;
  pSVar2 = mscorlib.dll::System::Guid::Guid_ToString(&GStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (current,pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar2;
}


/* ChunkInstances+<>c() */

void Assembly-CSharp.dll::ChunkInstances+<>c::ChunkInstances_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ChunkInstances____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ChunkInstances____c;
  value = (ChunkInstances_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ChunkInstances____c->static_fields->__9 = value;
  func_?(TypeInfo__ChunkInstances____c->static_fields,value);
  return;
}

