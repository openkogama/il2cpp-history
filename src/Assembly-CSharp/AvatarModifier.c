
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
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_BurningModifier;
    method_00 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
    ;
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MutantModifier;
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_PoisonModifier;
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_FrozenModifier;
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_NinjaRunModifier;
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_MouseModifier;
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_GrowthModifier;
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    iVar1 = func_?(0);
    if (iVar1 == 0) goto code_?;
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
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar1 = func_?(0);
    if ((iVar1 == 0) || (*(EnumPoolManager **)(iVar1 + 0x10) == (EnumPoolManager *)0x0))
    goto code_?;
    pAVar2 = (AvatarModifier *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (*(EnumPoolManager **)(iVar1 + 0x10),PoolEnums__Enum_InvulnerabilityModifier,
                        InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                       );
    unaff_ESI = (byte *)0x0;
    if (pAVar2 == (AvatarModifier *)0x0) goto code_?;
    pAVar2[1].fields._._._._.m_CachedPtr = (void *)0x11;
    goto code_?;
  case AvatarModifierPackageType__Enum_Lethal:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_Lethal;
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_HealingMat;
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    method_00 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 == 0) || (this = *(EnumPoolManager **)(iVar1 + 0x10), this == (EnumPoolManager *)0x0)
       ) goto code_?;
    pEnum = PoolEnums__Enum_CrumbleMat;
  }
  pAVar2 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,method_00);
code_?:
  unaff_ESI = (byte *)0x0;
  if (pAVar2 == (AvatarModifier *)0x0) {
code_?:
    bVar3 = 0;
    uVar4 = func_?();
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    bVar5 = *unaff_EDI;
    bVar6 = (byte)((ulonglong)uVar4 >> 0x20);
    bVar7 = *unaff_EDI;
    *unaff_EDI = (bVar7 - bVar6) - bVar3;
    bVar8 = (byte)uVar4;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    uVar9 = (undefined3)((ulonglong)uVar4 >> 8);
    bVar10 = 0x99 < bVar8 || (bVar5 < bVar6 || (byte)(bVar7 - bVar6) < bVar3);
    bVar8 = bVar8 + in_AF * -6 + bVar10 * -0x60;
    pbVar11 = (byte *)(iVar1 + 0x17);
    bVar5 = *pbVar11;
    bVar7 = *pbVar11;
    *pbVar11 = bVar7 + bVar8 + bVar10;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar10 = 0x99 < bVar8 || (CARRY1(bVar5,bVar8) || CARRY1(bVar7 + bVar8,bVar10));
    bVar8 = bVar8 + in_AF * -6 + bVar10 * -0x60;
    pbVar11 = (byte *)(extraout_ECX + 0x19);
    bVar7 = *pbVar11;
    bVar5 = *pbVar11;
    *pbVar11 = bVar5 + bVar8 + bVar10;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar10 = 0x99 < bVar8 || (CARRY1(bVar7,bVar8) || CARRY1(bVar5 + bVar8,bVar10));
    bVar8 = bVar8 + in_AF * -6 + bVar10 * -0x60;
    pbVar11 = unaff_EDI + iVar1 + 0x2f;
    bVar3 = (byte)((uint)extraout_ECX >> 8);
    bVar12 = CARRY1(*pbVar11,bVar3) || CARRY1(*pbVar11 + bVar3,bVar10);
    *pbVar11 = *pbVar11 + bVar3 + bVar10;
    pbVar11 = unaff_ESI + -0x3fefd0e9;
    bVar7 = *pbVar11;
    bVar5 = *pbVar11;
    *pbVar11 = bVar5 + bVar6 + bVar12;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar10 = 0x99 < bVar8 || (CARRY1(bVar7,bVar6) || CARRY1(bVar5 + bVar6,bVar12));
    bVar7 = bVar8 + in_AF * -6 + bVar10 * -0x60;
    bVar13 = bVar6 + bVar3 + bVar10;
    piVar14 = (int *)CONCAT31((int3)((ulonglong)uVar4 >> 0x28),bVar13);
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar10 = 0x99 < bVar7 || (CARRY1(bVar6,bVar3) || CARRY1(bVar6 + bVar3,bVar10));
    bVar8 = bVar7 + in_AF * -6 + bVar10 * -0x60;
    pbVar11 = (byte *)(CONCAT31(uVar9,bVar8) + unaff_EBX);
    bVar7 = *pbVar11;
    bVar5 = *pbVar11;
    *pbVar11 = bVar5 + bVar13 + bVar10;
    in_AF = 9 < (bVar8 & 0xf) | in_AF;
    bVar10 = 0x99 < bVar8 || (CARRY1(bVar7,bVar13) || CARRY1(bVar5 + bVar13,bVar10));
    bVar8 = bVar8 + in_AF * -6 + bVar10 * -0x60;
    bVar6 = (byte)((uint)unaff_EBX >> 8);
    bVar12 = CARRY1(*unaff_ESI,bVar6) || CARRY1(*unaff_ESI + bVar6,bVar10);
    *unaff_ESI = *unaff_ESI + bVar6 + bVar10;
    bVar10 = *unaff_EDI < bVar3 || (byte)(*unaff_EDI - bVar3) < bVar12;
    *unaff_EDI = (*unaff_EDI - bVar3) - bVar12;
    pbVar11 = unaff_ESI + 0x18;
    bVar7 = *pbVar11;
    bVar5 = *pbVar11;
    *pbVar11 = bVar5 + bVar6 + bVar10;
    bVar10 = 0x99 < bVar8 || (CARRY1(bVar7,bVar6) || CARRY1(bVar5 + bVar6,bVar10));
    cVar15 = bVar8 + (9 < (bVar8 & 0xf) | in_AF) * -6 + bVar10 * -0x60;
    pcVar16 = (char *)CONCAT31(uVar9,cVar15);
    pbVar11 = unaff_EDI + -0x21efd0e8;
    bVar12 = CARRY1(*pbVar11,bVar6) || CARRY1(*pbVar11 + bVar6,bVar10);
    *pbVar11 = *pbVar11 + bVar6 + bVar10;
    bVar10 = *unaff_EDI < bVar3 || (byte)(*unaff_EDI - bVar3) < bVar12;
    *unaff_EDI = (*unaff_EDI - bVar3) - bVar12;
    bVar12 = CARRY1(bVar3,bVar6) || CARRY1(bVar3 + bVar6,bVar10);
    bVar8 = bVar3 + bVar6 + bVar10;
    pbVar11 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                               CONCAT11(bVar8,(byte)extraout_ECX));
    bVar7 = *unaff_EDI;
    bVar5 = *unaff_EDI;
    *unaff_EDI = (bVar5 - bVar8) - bVar12;
    *pcVar16 = *pcVar16 + cVar15 + (bVar7 < bVar8 || (byte)(bVar5 - bVar8) < bVar12);
    *piVar14 = (int)(pcVar16 + *piVar14);
    *(char *)piVar14 = (char)*piVar14 + cVar15 + (char)*piVar14 + (char)*piVar14;
    *pbVar11 = *pbVar11 | (byte)extraout_ECX;
    pcVar17 = (code *)swi(3);
    pAVar2 = (AvatarModifier *)(*pcVar17)();
    return pAVar2;
  }
code_?:
  (pAVar2->fields).owner = owner;
  func_?(&(pAVar2->fields).owner);
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

