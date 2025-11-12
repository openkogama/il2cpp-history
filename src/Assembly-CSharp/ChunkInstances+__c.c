
/* String <Guids>b__19_0(String,
   KeyValuePair`2[MV.WorldObject.IntVector,ChunkInstances+ChunkInstanceVariables]) */

String * Assembly-CSharp.dll::ChunkInstances+<>c::ChunkInstances_c__Guids_b__19_0
                   (ChunkInstances_c *this,String *current,
                   KeyValuePair_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                   *keyValuePair,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aGStack_1[0]._a = (keyValuePair->value).guid._a;
  aGStack_1[0]._b = (keyValuePair->value).guid._b;
  aGStack_1[0]._c = (keyValuePair->value).guid._c;
  aGStack_1[0]._d = (keyValuePair->value).guid._d;
  aGStack_1[0]._e = (keyValuePair->value).guid._e;
  aGStack_1[0]._f = (keyValuePair->value).guid._f;
  aGStack_1[0]._g = (keyValuePair->value).guid._g;
  aGStack_1[0]._h = (keyValuePair->value).guid._h;
  aGStack_1[0]._i = (keyValuePair->value).guid._i;
  aGStack_1[0]._j = (keyValuePair->value).guid._j;
  aGStack_1[0]._k = (keyValuePair->value).guid._k;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::Guid::Guid_ToString_2
                     (aGStack_1,StringLiteral_D,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (current,pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar2;
}


/* ChunkInstances+<>c() */

void Assembly-CSharp.dll::ChunkInstances+<>c::ChunkInstances_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ChunkInstances____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ChunkInstances_c *)FUN_?(TypeInfo__ChunkInstances____c);
  TypeInfo__ChunkInstances____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ChunkInstances____c->static_fields >> 0xc);
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

