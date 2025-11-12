
/* Type <Awake>b__2_0(Pool) */

Type * Assembly-CSharp.dll::TypePoolManager+<>c::TypePoolManager_c__Awake_b__2_0
                 (TypePoolManager_c *this,Pool *p,MethodInfo *method)

{
  if ((p != (Pool *)0x0) &&
     (pMVar1 = (p->fields).prefab, this = (TypePoolManager_c *)0x0, pMVar1 != (MonoBehaviour *)0x0))
  {
    pIVar2 = &(pMVar1->klass->_0).byval_arg;
    apTStackX_10[0] = (Type *)0x0;
    pIStackX_8 = pIVar2;
    cVar3 = FUN_?(pIVar2,&pIStackX_8,apTStackX_10);
    if (cVar3 != '\0') {
      return apTStackX_10[0];
    }
    lVar4 = FUN_?(uRam_?);
    *(Il2CppType **)(lVar4 + 0x10) = pIVar2;
    pTVar5 = (Type *)FUN_?();
    return pTVar5;
  }
  FUN_?(this);
  pcVar6 = (code *)swi(3);
  pTVar5 = (Type *)(*pcVar6)();
  return pTVar5;
}


/* TypePoolManager+<>c() */

void Assembly-CSharp.dll::TypePoolManager+<>c::TypePoolManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TypePoolManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (TypePoolManager_c *)FUN_?(TypeInfo__TypePoolManager____c);
  TypeInfo__TypePoolManager____c->static_fields->__9 = pTVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__TypePoolManager____c->static_fields >> 0xc);
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

