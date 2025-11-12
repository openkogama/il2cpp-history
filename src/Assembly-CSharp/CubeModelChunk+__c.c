
/* String <Guids>b__27_0(String, Guid) */

String * Assembly-CSharp.dll::CubeModelChunk+<>c::CubeModelChunk_c__Guids_b__27_0
                   (CubeModelChunk_c *this,String *current,Guid *instancesKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GStack_1._a = instancesKey->_a;
  GStack_1._b = instancesKey->_b;
  GStack_1._c = instancesKey->_c;
  GStack_1._d = instancesKey->_d;
  GStack_1._e = instancesKey->_e;
  GStack_1._f = instancesKey->_f;
  GStack_1._g = instancesKey->_g;
  GStack_1._h = instancesKey->_h;
  GStack_1._i = instancesKey->_i;
  GStack_1._j = instancesKey->_j;
  GStack_1._k = instancesKey->_k;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::Guid::Guid_ToString_2
                     (&GStack_1,StringLiteral_D,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (current,pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar2;
}


/* CubeModelChunk+<>c() */

void Assembly-CSharp.dll::CubeModelChunk+<>c::CubeModelChunk_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelChunk____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CubeModelChunk_c *)FUN_?(TypeInfo__CubeModelChunk____c);
  TypeInfo__CubeModelChunk____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__CubeModelChunk____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

