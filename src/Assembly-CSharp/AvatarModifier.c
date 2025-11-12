
/* Void Activate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Activate
               (AvatarModifier *this,Avatar *target,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).isActivated = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar1->vtable).OnActivated.methodPtr)(this,target,(pAVar1->vtable).OnActivated.method);
  return;
}


/* AvatarModifier CreateFromType(AvatarModifierPackageType, Avatar) */

AvatarModifier *
Assembly-CSharp.dll::AvatarModifier::AvatarModifier_CreateFromType
          (AvatarModifierPackageType__Enum type,Avatar *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CrumbleMatModifier_MethodInfo__EnumPoolManager__Instantiate<CrumbleMatModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FrozenModifier_MethodInfo__EnumPoolManager__Instantiate<FrozenModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GrowthModifier_MethodInfo__EnumPoolManager__Instantiate<GrowthModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  HealingMatModifier_MethodInfo__EnumPoolManager__Instantiate<HealingMatModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LethalModifier_MethodInfo__EnumPoolManager__Instantiate<LethalModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MouseModifier_MethodInfo__EnumPoolManager__Instantiate<MouseModifier>_PoolEnums_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MutantModifier_MethodInfo__EnumPoolManager__Instantiate<MutantModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  NinjaRunModifier_MethodInfo__EnumPoolManager__Instantiate<NinjaRunModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PoisonModifier_MethodInfo__EnumPoolManager__Instantiate<PoisonModifier>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(type) {
  case AvatarModifierPackageType__Enum_Fire:
  case AvatarModifierPackageType__Enum_FlamerBurn:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_BurningModifier;
    method_00 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
    ;
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MutantModifier;
    method_00 = MutantModifier_MethodInfo__EnumPoolManager__Instantiate<MutantModifier>_PoolEnums_;
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_PoisonModifier;
    method_00 = PoisonModifier_MethodInfo__EnumPoolManager__Instantiate<PoisonModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_FrozenModifier;
    method_00 = FrozenModifier_MethodInfo__EnumPoolManager__Instantiate<FrozenModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_NinjaRunModifier;
    method_00 = 
    NinjaRunModifier_MethodInfo__EnumPoolManager__Instantiate<NinjaRunModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MouseModifier;
    method_00 = MouseModifier_MethodInfo__EnumPoolManager__Instantiate<MouseModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_GrowthModifier;
    method_00 = GrowthModifier_MethodInfo__EnumPoolManager__Instantiate<GrowthModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    lVar1 = FUN_?();
    if (lVar1 == 0) goto code_?;
    original = *(Object **)(lVar1 + 0x430);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar2 = (AvatarModifier *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       (original,
                        AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                       );
    goto code_?;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    lVar1 = FUN_?();
    if (((lVar1 == 0) || (*(EnumPoolManager **)(lVar1 + 0x20) == (EnumPoolManager *)0x0)) ||
       (pAVar2 = (AvatarModifier *)
                 EnumPoolManager::EnumPoolManager_Instantiate
                           (*(EnumPoolManager **)(lVar1 + 0x20),
                            PoolEnums__Enum_InvulnerabilityModifier,
                            InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                           ), pAVar2 == (AvatarModifier *)0x0)) goto code_?;
    *(undefined4 *)&pAVar2[1].fields._._._._.m_CachedPtr = 0x11;
    goto code_?;
  case AvatarModifierPackageType__Enum_Lethal:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_Lethal;
    method_00 = LethalModifier_MethodInfo__EnumPoolManager__Instantiate<LethalModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_HealingMat;
    method_00 = 
    HealingMatModifier_MethodInfo__EnumPoolManager__Instantiate<HealingMatModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    lVar1 = FUN_?();
    if ((lVar1 == 0) || (this = *(EnumPoolManager **)(lVar1 + 0x20), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_CrumbleMat;
    method_00 = 
    CrumbleMatModifier_MethodInfo__EnumPoolManager__Instantiate<CrumbleMatModifier>_PoolEnums_;
  }
  pAVar2 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,method_00);
code_?:
  if (pAVar2 == (AvatarModifier *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pAVar2 = (AvatarModifier *)(*pcVar3)();
    return pAVar2;
  }
code_?:
  bVar4 = iRam_? != 0;
  (pAVar2->fields).owner = owner;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pAVar2->fields).owner >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return pAVar2;
}


/* Void Deactivate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Deactivate
               (AvatarModifier *this,Avatar *target,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).isActivated = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar1->vtable).OnDeactivated.methodPtr)(this,target,(pAVar1->vtable).OnDeactivated.method);
  return;
}


/* Void ResetTimeStamp() */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_ResetTimeStamp
               (AvatarModifier *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).timeStamp = fVar3;
  return;
}


/* Boolean get_IsLocal() */

bool Assembly-CSharp.dll::AvatarModifier::AvatarModifier_get_IsLocal
               (AvatarModifier *this,MethodInfo *method)

{
  pAVar1 = (this->fields).owner;
  if (pAVar1 != (Avatar *)0x0) {
    return (pAVar1->fields).isLocal;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

