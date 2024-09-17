
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* AvatarModifier CreateFromType(AvatarModifierPackageType, Avatar) */

AvatarModifier *
Assembly-CSharp.dll::AvatarModifier::AvatarModifier_CreateFromType
          (AvatarModifierPackageType__Enum type,Avatar *owner,MethodInfo *method)

{
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
    iVar1 = func_?(0);
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_BurningModifier;
      method_00 = 
      BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_;
code_?:
      pAVar2 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,method_00);
code_?:
      unaff_ESI = 0;
      if (pAVar2 != (AvatarModifier *)0x0) {
code_?:
        (pAVar2->fields).owner = owner;
        func_?(&(pAVar2->fields).owner);
        return pAVar2;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_MutantModifier;
      goto code_?;
    }
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_PoisonModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_FrozenModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_NinjaRunModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_MouseModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_GrowthModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    iVar1 = func_?(0);
    if (iVar1 != 0) {
      original = *(Object **)(iVar1 + 0x218);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar2 = (AvatarModifier *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         (original,
                          AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                         );
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar1 = func_?(0);
    if ((iVar1 != 0) && (*(EnumPoolManager **)(iVar1 + 0x10) != (EnumPoolManager *)0x0)) {
      pAVar2 = (AvatarModifier *)
               EnumPoolManager::EnumPoolManager_Instantiate
                         (*(EnumPoolManager **)(iVar1 + 0x10),
                          PoolEnums__Enum_InvulnerabilityModifier,
                          InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                         );
      unaff_ESI = 0;
      if (pAVar2 != (AvatarModifier *)0x0) {
        pAVar2[1].fields._._._._.m_CachedPtr = (void *)0x11;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Lethal:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_Lethal;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_HealingMat;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_CrumbleMat;
      goto code_?;
    }
  }
  uVar3 = func_?();
  piVar4 = (int *)((ulonglong)uVar3 >> 0x20);
  pbVar5 = (byte *)((int)&method + unaff_ESI);
  bVar6 = *pbVar5;
  bVar7 = (byte)(unaff_EBX >> 8);
  bVar8 = *pbVar5;
  *pbVar5 = *pbVar5 - bVar7;
  bVar9 = (byte)extraout_ECX;
  if (SBORROW1(bVar8,bVar7) == (char)*pbVar5 < '\0') {
    pbVar5 = extraout_ECX + 0x7e;
    bVar10 = (byte)((ulonglong)uVar3 >> 0x20);
    bVar11 = CARRY1(*pbVar5,bVar10) || CARRY1(*pbVar5 + bVar10,bVar6 < bVar7);
    *pbVar5 = *pbVar5 + bVar10 + (bVar6 < bVar7);
    pbVar5 = &stack0x0000002e + unaff_EDI * 2;
    bVar12 = CARRY1(*pbVar5,bVar7) || CARRY1(*pbVar5 + bVar7,bVar11);
    *pbVar5 = *pbVar5 + bVar7 + bVar11;
    pbVar5 = (byte *)(unaff_ESI + -0x2fefd184);
    bVar13 = (byte)((ulonglong)uVar3 >> 8);
    bVar6 = *pbVar5;
    bVar8 = *pbVar5 + bVar13;
    bVar11 = CARRY1(*pbVar5,bVar13) || CARRY1(bVar8,bVar12);
    *pbVar5 = bVar8 + bVar12;
    if ((SCARRY1(bVar6,bVar13) != SCARRY1(bVar8,bVar12)) != (char)*pbVar5 < '\0')
    goto code_?;
    bVar6 = bVar10 + bVar7;
    bVar12 = CARRY1(bVar10,bVar7) || CARRY1(bVar6,bVar11);
    if ((SCARRY1(bVar10,bVar7) != SCARRY1(bVar6,bVar11)) != (char)(bVar6 + bVar11) < '\0')
    goto code_?;
    pbVar5 = (byte *)(unaff_EDI * 2 + 0x7d4e102e);
    bVar14 = CARRY1(*pbVar5,bVar13) || CARRY1(*pbVar5 + bVar13,bVar12);
    *pbVar5 = *pbVar5 + bVar13 + bVar12;
    pbVar5 = (byte *)(unaff_ESI + -0x30efd183);
    bVar8 = *pbVar5;
    bVar13 = *pbVar5 + bVar9;
    bVar12 = CARRY1(*pbVar5,bVar9) || CARRY1(bVar13,bVar14);
    *pbVar5 = bVar13 + bVar14;
    uVar15 = (undefined3)((ulonglong)uVar3 >> 8);
    if ((SCARRY1(bVar8,bVar9) != SCARRY1(bVar13,bVar14)) == (char)*pbVar5 < '\0') {
      *(byte *)(unaff_EBX + 0x1441c601) = *(byte *)(unaff_EBX + 0x1441c601) | bVar9;
      pcVar16 = (code *)CONCAT31(uVar15,4);
      *(code **)pcVar16 = pcVar16 + *(int *)pcVar16;
      pcVar17 = (char *)(CONCAT22((short)(unaff_EBX >> 0x10),
                                 CONCAT11(bVar7 * '\x02',(char)unaff_EBX)) + 0x10080);
      *pcVar17 = *pcVar17 + bVar9;
      pbVar5 = extraout_ECX;
      if ((unaff_EBX & 0x3f00) != 0) {
        pcVar16 = (code *)swi(3);
        pAVar2 = (AvatarModifier *)(*pcVar16)();
        return pAVar2;
      }
code_?:
      pAVar2 = (AvatarModifier *)(*pcVar16)(pbVar5);
      return pAVar2;
    }
    bVar7 = (byte)((uint)extraout_ECX >> 8);
    bVar13 = (byte)((ulonglong)uVar3 >> 0x28);
    bVar8 = bVar13 + bVar7;
    bVar14 = CARRY1(bVar13,bVar7) || CARRY1(bVar8,bVar12);
    piVar4 = (int *)CONCAT22((short)((ulonglong)uVar3 >> 0x30),
                              CONCAT11(bVar8 + bVar12,bVar6 + bVar11));
    if ((SCARRY1(bVar13,bVar7) != SCARRY1(bVar8,bVar12)) == (char)(bVar8 + bVar12) < '\0') {
      pbVar5 = extraout_ECX + 1;
      pcVar16 = *(code **)(CONCAT31(uVar15,(char)uVar3 + bVar14) + 0x100);
      goto code_?;
    }
    cRam_? = cRam_? + bVar9 + bVar14;
  }
  *piVar4 = *piVar4 + (int)uVar3;
  *(char *)piVar4 = (char)*piVar4 + (char)uVar3 + (char)*piVar4 + (char)*piVar4;
  *extraout_ECX = *extraout_ECX | bVar9;
code_?:
  pcVar16 = (code *)swi(3);
  pAVar2 = (AvatarModifier *)(*pcVar16)();
  return pAVar2;
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

