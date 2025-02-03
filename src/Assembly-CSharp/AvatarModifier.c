
/* Void Activate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Activate
               (AvatarModifier *this,Avatar *target,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).isActivated = 1;
  (*(code *)(pAVar1->vtable).OnActivated.method)
            (this,target,(pAVar1->vtable).OnDeactivated.methodPtr);
  return;
}


/* AvatarModifier CreateFromType(AvatarModifierPackageType, Avatar) */

AvatarModifier *
Assembly-CSharp.dll::AvatarModifier::AvatarModifier_CreateFromType
          (AvatarModifierPackageType__Enum type,Avatar *owner,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&
                    BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
                   );
    func_?(&
                    CrumbleMatModifier_MethodInfo__EnumPoolManager__Instantiate<CrumbleMatModifier>_PoolEnums_
                   );
    func_?(&
                    FrozenModifier_MethodInfo__EnumPoolManager__Instantiate<FrozenModifier>_PoolEnums_
                   );
    func_?(&
                    GrowthModifier_MethodInfo__EnumPoolManager__Instantiate<GrowthModifier>_PoolEnums_
                   );
    func_?(&
                    HealingMatModifier_MethodInfo__EnumPoolManager__Instantiate<HealingMatModifier>_PoolEnums_
                   );
    func_?(&
                    InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                   );
    func_?(&
                    LethalModifier_MethodInfo__EnumPoolManager__Instantiate<LethalModifier>_PoolEnums_
                   );
    func_?(&
                    MouseModifier_MethodInfo__EnumPoolManager__Instantiate<MouseModifier>_PoolEnums_
                   );
    func_?(&
                    MutantModifier_MethodInfo__EnumPoolManager__Instantiate<MutantModifier>_PoolEnums_
                   );
    func_?(&
                    NinjaRunModifier_MethodInfo__EnumPoolManager__Instantiate<NinjaRunModifier>_PoolEnums_
                   );
    func_?(&
                    PoisonModifier_MethodInfo__EnumPoolManager__Instantiate<PoisonModifier>_PoolEnums_
                   );
    func_?(&
                    AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  switch(type) {
  case AvatarModifierPackageType__Enum_Fire:
  case AvatarModifierPackageType__Enum_FlamerBurn:
    iVar2 = func_?(0);
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_BurningModifier;
    method_00 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
    ;
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MutantModifier;
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_PoisonModifier;
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_FrozenModifier;
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_NinjaRunModifier;
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MouseModifier;
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_GrowthModifier;
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    iVar2 = func_?(0);
    if (iVar2 == 0) goto code_?;
    original = *(Object **)(iVar2 + 0x218);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = (AvatarModifier *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       (original,
                        AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                       );
    goto code_?;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar2 = func_?(0);
    if ((iVar2 == 0) || (*(EnumPoolManager **)(iVar2 + 0x10) == (EnumPoolManager *)0x0))
    goto code_?;
    pAVar3 = (AvatarModifier *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (*(EnumPoolManager **)(iVar2 + 0x10),PoolEnums__Enum_InvulnerabilityModifier,
                        InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                       );
    unaff_ESI = 0;
    if (pAVar3 == (AvatarModifier *)0x0) goto code_?;
    pAVar3[1].fields._._._._.m_CachedPtr = (void *)0x11;
    goto code_?;
  case AvatarModifierPackageType__Enum_Lethal:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_Lethal;
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_HealingMat;
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    method_00 = (MethodInfo *)0x0;
    iVar2 = func_?();
    if ((iVar2 == 0) || (this = *(EnumPoolManager **)(iVar2 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_CrumbleMat;
  }
  pAVar3 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,method_00);
code_?:
  unaff_ESI = 0;
  if (pAVar3 == (AvatarModifier *)0x0) {
code_?:
    bVar4 = 0;
    iVar2 = func_?();
    cVar5 = '\x0f';
    do {
      puVar1 = puVar1 + -1;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + -4);
      *(undefined4 *)register0x00000010 = *puVar1;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    bVar6 = (byte)(iVar2 >> 0x1f);
    bVar7 = CARRY1(extraout_CL,bVar6) || CARRY1(extraout_CL + bVar6,bVar4);
    pbVar8 = (byte *)((iVar2 >> 0x1f) + unaff_EBX * 4);
    bVar9 = (byte)unaff_EBX;
    bVar10 = CARRY1(*pbVar8,bVar9) || CARRY1(*pbVar8 + bVar9,bVar7);
    *pbVar8 = *pbVar8 + bVar9 + bVar7;
    pbVar8 = (byte *)(unaff_ESI + -0x66);
    bVar4 = *pbVar8 + (byte)iVar2;
    bVar7 = CARRY1(*pbVar8,(byte)iVar2) || CARRY1(bVar4,bVar10);
    *pbVar8 = bVar4 + bVar10;
    pbVar8 = (byte *)(iVar2 + -0x66);
    bVar10 = CARRY1(*pbVar8,bVar6) || CARRY1(*pbVar8 + bVar6,bVar7);
    *pbVar8 = *pbVar8 + bVar6 + bVar7;
    pbVar8 = (byte *)((iVar2 >> 0x1f) + -0x3befd166);
    bVar11 = CARRY1(*pbVar8,bVar9) || CARRY1(*pbVar8 + bVar9,bVar10);
    *pbVar8 = *pbVar8 + bVar9 + bVar10;
    uVar12 = func_?(in_CS);
    piVar13 = (int *)((ulonglong)uVar12 >> 0x20);
    pcVar14 = (char *)uVar12;
    pbVar8 = (byte *)(unaff_EDI + -0x65);
    bVar6 = (byte)((uint)extraout_ECX >> 8);
    bVar4 = *pbVar8 + bVar6;
    bVar7 = CARRY1(*pbVar8,bVar6) || CARRY1(bVar4,bVar11);
    *pbVar8 = bVar4 + bVar11;
    pbVar8 = (byte *)(unaff_ESI + -0x52efd165);
    bVar4 = *pbVar8;
    bVar9 = (byte)extraout_ECX;
    bVar6 = *pbVar8;
    *pbVar8 = bVar6 + bVar9 + bVar7;
    *pcVar14 = *pcVar14 + (char)uVar12 + (CARRY1(bVar4,bVar9) || CARRY1(bVar6 + bVar9,bVar7));
    *piVar13 = (int)(pcVar14 + *piVar13);
    *(char *)piVar13 = (char)*piVar13 + (char)uVar12 + (char)*piVar13 + (char)*piVar13;
    *extraout_ECX = *extraout_ECX | bVar9;
    pcVar15 = (code *)swi(3);
    pAVar3 = (AvatarModifier *)(*pcVar15)();
    return pAVar3;
  }
code_?:
  (pAVar3->fields).owner = owner;
  func_?();
  return pAVar3;
}


/* Void Deactivate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Deactivate
               (AvatarModifier *this,Avatar *target,MethodInfo *method)

{
  pAVar1 = this->klass;
  (this->fields).isActivated = 0;
  (*(code *)(pAVar1->vtable).OnDeactivated.method)(this,target,pAVar1[1]._0.image);
  return;
}


/* Void ResetTimeStamp() */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_ResetTimeStamp
               (AvatarModifier *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).timeStamp = fVar1;
  return;
}


/* Boolean get_IsLocal() */

bool Assembly-CSharp.dll::AvatarModifier::AvatarModifier_get_IsLocal
               (AvatarModifier *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).owner;
  if (pAVar2 != (Avatar *)0x0) {
    return (pAVar2->fields).isLocal;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

