
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
      original = *(Object **)(iVar1 + 0x20c);
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
  puVar4 = (uint *)((ulonglong)uVar3 >> 0x20);
  uVar5 = (uint)uVar3;
  bVar6 = (byte)((ulonglong)uVar3 >> 0x28);
  *(byte *)(unaff_ESI + 0x2d) = *(byte *)(unaff_ESI + 0x2d) | bVar6;
  bVar7 = CARRY1((byte)*puVar4,bVar6);
  *(byte *)puVar4 = (byte)*puVar4 + bVar6;
  bVar8 = (byte)uVar3;
  pbVar9 = extraout_ECX;
  if (bVar7 || (byte)*puVar4 == 0) {
    *extraout_ECX = *extraout_ECX + bVar8;
  }
  else {
    bVar10 = CARRY1(*extraout_ECX,bVar6) || CARRY1(*extraout_ECX + bVar6,bVar7);
    *extraout_ECX = *extraout_ECX + bVar6 + bVar7;
    if (-1 < (char)*extraout_ECX) {
      pbVar11 = (byte *)(unaff_ESI * 3 + 0x2d);
      bVar7 = CARRY1(*pbVar11,unaff_BL) || CARRY1(*pbVar11 + unaff_BL,bVar10);
      *pbVar11 = *pbVar11 + unaff_BL + bVar10;
      pbVar11 = (byte *)(unaff_ESI + -0x4fefd28a);
      bVar10 = CARRY1(*pbVar11,bVar8) || CARRY1(*pbVar11 + bVar8,bVar7);
      *pbVar11 = *pbVar11 + bVar8 + bVar7;
      if (bVar10 || *pbVar11 == 0) {
        *puVar4 = *puVar4 | uVar5;
        goto code_?;
      }
      bVar12 = (byte)((ulonglong)uVar3 >> 0x20);
      bVar13 = bVar12 + unaff_BL;
      bVar7 = CARRY1(bVar12,unaff_BL) || CARRY1(bVar13,bVar10);
      cVar14 = bVar13 + bVar10;
      if (bVar7 || cVar14 == '\0') goto code_?;
      pcVar15 = (char *)(unaff_EDI + unaff_ESI * 2);
      *pcVar15 = *pcVar15 + bVar8 + bVar7;
      bVar12 = (byte)((uint)extraout_ECX >> 8);
      *(char *)(unaff_ESI + 0x77) = *(char *)(unaff_ESI + 0x77) + bVar12 + (uVar5 < 0x2d772e10);
      bVar10 = uVar5 + 0xd288d1f0 < 0x2d77af10;
      pcVar15 = (char *)(uVar5 + 0xa51122e0);
      bVar13 = (byte)extraout_ECX;
      bVar8 = bVar6 + bVar13;
      bVar7 = CARRY1(bVar8,bVar10);
      bVar16 = CARRY1(bVar6,bVar13) || bVar7;
      cVar17 = bVar8 + bVar10;
      piVar18 = (int *)CONCAT22((short)((ulonglong)uVar3 >> 0x30),CONCAT11(cVar17,cVar14));
      if ((!CARRY1(bVar6,bVar13) && !bVar7) && cVar17 != '\0') {
        extraout_ECX[0x14] = 0;
code_?:
        pAVar2 = (AvatarModifier *)(**(code **)(uVar5 + 0xa51123e0))(pbVar9,owner);
        return pAVar2;
      }
      bVar8 = bVar12 * '\x02';
      bVar7 = CARRY1(bVar8,bVar16);
      cVar14 = bVar8 + bVar16;
      pbVar9 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(cVar14,bVar13));
      if ((!CARRY1(bVar12,bVar12) && !bVar7) && cVar14 != '\0') goto code_?;
      *pcVar15 = *pcVar15 + (char)pcVar15 + (CARRY1(bVar12,bVar12) || bVar7);
      *piVar18 = (int)(pcVar15 + *piVar18);
      *(char *)piVar18 = (char)*piVar18 + (char)pcVar15 + (char)*piVar18 + (char)*piVar18;
    }
  }
  *pbVar9 = *pbVar9 | (byte)pbVar9;
code_?:
  pcVar19 = (code *)swi(3);
  pAVar2 = (AvatarModifier *)(*pcVar19)();
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

