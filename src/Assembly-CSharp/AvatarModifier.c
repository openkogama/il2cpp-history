
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
      pMVar2 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
      ;
code_?:
      pAVar3 = (AvatarModifier *)EnumPoolManager::EnumPoolManager_Instantiate(this,pEnum,pMVar2);
code_?:
      unaff_ESI = (byte *)0x0;
      if (pAVar3 != (AvatarModifier *)0x0) {
code_?:
        (pAVar3->fields).owner = owner;
        func_?();
        return pAVar3;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    pMVar2 = (MethodInfo *)0x0;
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
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_PoisonModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_FrozenModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_NinjaRunModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_MouseModifier;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    pMVar2 = (MethodInfo *)0x0;
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
      pAVar3 = (AvatarModifier *)
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
      pAVar3 = (AvatarModifier *)
               EnumPoolManager::EnumPoolManager_Instantiate
                         (*(EnumPoolManager **)(iVar1 + 0x10),
                          PoolEnums__Enum_InvulnerabilityModifier,
                          InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                         );
      unaff_ESI = (byte *)0x0;
      if (pAVar3 != (AvatarModifier *)0x0) {
        pAVar3[1].fields._._._._.m_CachedPtr = (void *)0x11;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Lethal:
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_Lethal;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_HealingMat;
      goto code_?;
    }
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    pMVar2 = (MethodInfo *)0x0;
    iVar1 = func_?();
    if ((iVar1 != 0) && (this = *(EnumPoolManager **)(iVar1 + 0x10), this != (EnumPoolManager *)0x0)
       ) {
      pEnum = PoolEnums__Enum_CrumbleMat;
      goto code_?;
    }
  }
  bVar4 = 0;
  uVar5 = func_?();
  puVar6 = (uint *)((ulonglong)uVar5 >> 0x20);
  cVar7 = (char)(unaff_EBX >> 8);
  *(char *)((int)puVar6 + 0x2d) = cVar7;
  pbVar8 = (byte *)((int)puVar6 + -0x4eefd286);
  bVar9 = (byte)((ulonglong)uVar5 >> 0x28);
  bVar10 = *pbVar8;
  bVar11 = *pbVar8 + bVar9;
  bVar12 = CARRY1(*pbVar8,bVar9) || CARRY1(bVar11,bVar4);
  *pbVar8 = bVar11 + bVar4;
  bVar13 = (byte)extraout_ECX;
  if ((SCARRY1(bVar10,bVar9) != SCARRY1(bVar11,bVar4)) == (char)*pbVar8 < '\0') {
    bVar11 = (byte)((ulonglong)uVar5 >> 8);
    bVar4 = (byte)unaff_EBX;
    bVar10 = bVar11 + bVar4;
    bVar14 = CARRY1(bVar11,bVar4) || CARRY1(bVar10,bVar12);
    bVar11 = (byte)uVar5;
    cVar15 = bVar10 + bVar12;
    pbVar8 = (byte *)CONCAT22((short)((ulonglong)uVar5 >> 0x10),CONCAT11(cVar15,bVar11));
    if ((POPCOUNT(cVar15) & 1U) != 0) {
      bVar12 = CARRY1(*unaff_ESI,bVar11) || CARRY1(*unaff_ESI + bVar11,bVar14);
      *unaff_ESI = *unaff_ESI + bVar11 + bVar14;
      if ((POPCOUNT(*unaff_ESI) & 1U) == 0) {
        bVar10 = *pbVar8;
        bVar11 = *pbVar8;
        *pbVar8 = bVar11 + bVar9 + bVar12;
        if ((POPCOUNT(*pbVar8) & 1U) != 0) {
          *puVar6 = *puVar6 | (uint)pbVar8;
          goto code_?;
        }
        *(char *)((int)puVar6 + 0x7b) =
             *(char *)((int)puVar6 + 0x7b) + bVar4 +
             (CARRY1(bVar10,bVar9) || CARRY1(bVar11 + bVar9,bVar12));
        pbVar16 = unaff_ESI + -0x11efd285;
        bVar10 = (byte)((uint)extraout_ECX >> 8);
        bVar12 = CARRY1(*pbVar16,bVar10) || CARRY1(*pbVar16 + bVar10,pbVar8 < (byte *)0x2d7b8410);
        *pbVar16 = *pbVar16 + bVar10 + (pbVar8 < (byte *)0x2d7b8410);
        if ((POPCOUNT(*pbVar16) & 1U) != 0) {
          pAVar17 = owner->klass;
          (owner->fields).isLocal = 0;
          pMVar2 = (pAVar17->vtable).Initialize.method;
code_?:
          pAVar3 = (AvatarModifier *)(*(code *)pMVar2)();
          return pAVar3;
        }
        bVar11 = *unaff_EDI;
        bVar9 = *unaff_EDI;
        bVar18 = *unaff_EDI + bVar10;
        *unaff_EDI = bVar18 + bVar12;
        if ((SCARRY1(bVar9,bVar10) != SCARRY1(bVar18,bVar12)) != (char)*unaff_EDI < '\0') {
          *(byte *)(unaff_EBX + 0x1441c601) = *(byte *)(unaff_EBX + 0x1441c601) | bVar13;
          pMVar2 = (MethodInfo *)CONCAT31((int3)((uint)(pbVar8 + -0x2d7b8410) >> 8),4);
          pMVar2->methodPointer =
               (Il2CppMethodPointer)((int)&pMVar2->methodPointer + (int)pMVar2->methodPointer);
          pcVar19 = (char *)(CONCAT22((short)(unaff_EBX >> 0x10),CONCAT11(cVar7 * '\x02',bVar4)) +
                           0x10080);
          *pcVar19 = *pcVar19 + bVar13;
          if ((unaff_EBX & 0x3f00) != 0) {
            pcVar20 = (code *)swi(3);
            pAVar3 = (AvatarModifier *)(*pcVar20)();
            return pAVar3;
          }
          goto code_?;
        }
        unaff_ESI[0x7c] = unaff_ESI[0x7c] + bVar13 + (CARRY1(bVar11,bVar10) || CARRY1(bVar18,bVar12))
        ;
        pbVar16 = pbVar8 + -0x5af7f120;
        *pbVar16 = *pbVar16 + (char)pbVar16 + (pbVar8 + -0x2d7b8410 < (byte *)0x2d7c6d10);
        *puVar6 = (uint)(pbVar16 + *puVar6);
        *(char *)puVar6 = (char)*puVar6 + (char)pbVar16 + (char)*puVar6 + (char)*puVar6;
      }
    }
  }
  *extraout_ECX = *extraout_ECX | bVar13;
code_?:
  pcVar20 = (code *)swi(3);
  pAVar3 = (AvatarModifier *)(*pcVar20)();
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

