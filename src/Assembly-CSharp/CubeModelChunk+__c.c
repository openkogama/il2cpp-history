
/* String <Guids>b__27_0(String, Guid) */

String * Assembly-CSharp.dll::CubeModelChunk+<>c::CubeModelChunk_c__Guids_b__27_0
                   (CubeModelChunk_c *this,String *current,Guid instancesKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  GStack_1._a = instancesKey._a;
  GStack_1._b = instancesKey._b;
  GStack_1._c = instancesKey._c;
  GStack_1._d = instancesKey._d;
  GStack_1._e = instancesKey._e;
  GStack_1._f = instancesKey._f;
  GStack_1._g = instancesKey._g;
  GStack_1._h = instancesKey._h;
  GStack_1._i = instancesKey._i;
  GStack_1._j = instancesKey._j;
  GStack_1._k = instancesKey._k;
  pSVar2 = mscorlib.dll::System::Guid::Guid_ToString(&GStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (current,pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar2;
}


/* CubeModelChunk+<>c() */

void Assembly-CSharp.dll::CubeModelChunk+<>c::CubeModelChunk_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelChunk____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CubeModelChunk____c;
  value = (CubeModelChunk_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__CubeModelChunk____c->static_fields->__9 = value;
  func_?(TypeInfo__CubeModelChunk____c->static_fields,value);
  return;
}

