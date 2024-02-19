
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
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar1 = func_?(0);
    if ((iVar1 == 0) || (*(EnumPoolManager **)(iVar1 + 0x10) == (EnumPoolManager *)0x0))
    goto code_?;
    pAVar2 = (AvatarModifier *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (*(EnumPoolManager **)(iVar1 + 0x10),PoolEnums__Enum_InvulnerabilityModifier,
                        InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                       );
    unaff_ESI = 0;
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
  unaff_ESI = 0;
  if (pAVar2 == (AvatarModifier *)0x0) {
code_?:
    uVar3 = func_?();
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    uVar5 = (uint)uVar3;
    bVar6 = (byte)((ulonglong)uVar3 >> 0x20);
    bVar7 = (byte)unaff_EBX | bVar6;
    iVar1 = uVar5 + 0xd22ccdf0;
    bVar8 = (byte)((ulonglong)uVar3 >> 0x28);
    bVar9 = CARRY1(*extraout_ECX,bVar8) || CARRY1(*extraout_ECX + bVar8,uVar5 < 0x2dd33210);
    *extraout_ECX = *extraout_ECX + bVar8 + (uVar5 < 0x2dd33210);
    bVar10 = (char)iVar1 + (char)((uint)iVar1 >> 8) * '-';
    uVar11 = CONCAT22((short)((uint)iVar1 >> 0x10),(ushort)bVar10);
    pbVar12 = (byte *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7) + 0x2d + iVar4 * 8);
    bVar13 = CARRY1(*pbVar12,bVar7) || CARRY1(*pbVar12 + bVar7,bVar9);
    *pbVar12 = *pbVar12 + bVar7 + bVar9;
    pbVar12 = (byte *)(unaff_ESI + -0x4fefd22d);
    bVar7 = *pbVar12;
    bVar14 = *pbVar12;
    *pbVar12 = bVar14 + bVar10 + bVar13;
    uVar5 = uRam_?;
    bVar15 = (byte)extraout_ECX;
    uRam_? = uRam_? >> (bVar15 & 0x1f);
    bVar9 = ((uint)extraout_ECX & 0x1f) == 0;
    *(byte *)(&type + iVar4 * 2) =
         (char)(&type)[iVar4 * 2] + bVar10 +
         (bVar9 * (CARRY1(bVar7,bVar10) || CARRY1(bVar14 + bVar10,bVar13)) |
         !bVar9 * ((uVar5 >> (bVar15 & 0x1f) - 1 & 1) != 0));
    bVar10 = (byte)((uint)extraout_ECX >> 8);
    *(char *)(unaff_ESI + -0x2c) = *(char *)(unaff_ESI + -0x2c) + bVar10 + (uVar11 < 0x2dd42e10);
    bVar9 = uVar11 + 0xd22bd1f0 < 0x2dd4af10;
    bVar13 = CARRY1(bVar8,bVar15) || CARRY1(bVar8 + bVar15,bVar9);
    piVar16 = (int *)CONCAT22((short)((ulonglong)uVar3 >> 0x30),
                              CONCAT11(bVar8 + bVar15 + bVar9,bVar6));
    bVar7 = (byte)(uVar11 + 0xa45722e0) % 0x2d;
    pbVar12 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                               CONCAT11(bVar10 * '\x02' + bVar13,bVar15));
    bVar14 = bVar7 % 0x2d;
    pcVar17 = (char *)CONCAT31((int3)(CONCAT22((short)(uVar11 + 0xa45722e0 >> 0x10),
                                              CONCAT11(bVar7 / 0x2d,bVar7)) >> 8),bVar14);
    *pcVar17 = *pcVar17 + bVar14 + (CARRY1(bVar10,bVar10) || CARRY1(bVar10 * '\x02',bVar13));
    *piVar16 = (int)(pcVar17 + *piVar16);
    *(byte *)piVar16 = (char)*piVar16 + bVar14 + (char)*piVar16 + (char)*piVar16;
    *pbVar12 = *pbVar12 | bVar15;
    pcVar18 = (code *)swi(3);
    pAVar2 = (AvatarModifier *)(*pcVar18)();
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

