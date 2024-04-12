
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
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_BurningModifier;
        pMVar4 = 
        BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_;
code_?:
        pAVar5 = (AvatarModifier *)
                 EnumPoolManager::EnumPoolManager_Instantiate(pEVar3,pEnum,pMVar4);
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_MutantModifier;
        goto code_?;
      }
    }
    break;
  default:
    goto code_?;
  case AvatarModifierPackageType__Enum_Poison:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_PoisonModifier;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_FrozenModifier;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_NinjaRunModifier;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_MouseModifier;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_GrowthModifier;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    iVar1 = func_?(0);
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      original = *(Object **)(iVar1 + 0x20c);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar5 = (AvatarModifier *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         (original,
                          AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                         );
code_?:
      bVar2 = (int)pAVar5 < 0;
      unaff_ESI = (char *)0x0;
      if (pAVar5 != (AvatarModifier *)0x0) {
code_?:
        (pAVar5->fields).owner = owner;
        func_?();
        return pAVar5;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    iVar1 = func_?(0);
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pAVar5 = (AvatarModifier *)
                 EnumPoolManager::EnumPoolManager_Instantiate
                           (pEVar3,PoolEnums__Enum_InvulnerabilityModifier,
                            InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                           );
        bVar2 = (int)pAVar5 < 0;
        unaff_ESI = (char *)0x0;
        if (pAVar5 != (AvatarModifier *)0x0) {
          pAVar5[1].fields._._._._.m_CachedPtr = (void *)0x11;
          goto code_?;
        }
      }
    }
    break;
  case AvatarModifierPackageType__Enum_Lethal:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_Lethal;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_HealingMat;
        goto code_?;
      }
    }
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    pMVar4 = (MethodInfo *)0x0;
    iVar1 = func_?();
    bVar2 = iVar1 < 0;
    if (iVar1 != 0) {
      pEVar3 = *(EnumPoolManager **)(iVar1 + 0x10);
      bVar2 = (int)pEVar3 < 0;
      if (pEVar3 != (EnumPoolManager *)0x0) {
        pEnum = PoolEnums__Enum_CrumbleMat;
        goto code_?;
      }
    }
  }
  uVar6 = func_?();
  uVar7 = (uint)uVar6;
  if (bVar2) {
    *(byte *)(unaff_EBX + 0xc35d5ec6) = *(byte *)(unaff_EBX + 0xc35d5ec6) | (byte)extraout_ECX;
code_?:
    return (AvatarModifier *)0x0;
  }
  pbVar8 = (byte *)(uVar7 + 0xd21f5df0);
  pbVar9 = (byte *)(extraout_ECX + -0x33efd21e);
  bVar10 = (byte)((uint)pbVar8 >> 8);
  bVar2 = CARRY1(*pbVar9,bVar10) || CARRY1(*pbVar9 + bVar10,uVar7 < 0x2de0a210);
  *pbVar9 = *pbVar9 + bVar10 + (uVar7 < 0x2de0a210);
  pbVar11 = (byte *)(extraout_ECX + -1);
  if (pbVar11 == (byte *)0x0 || *pbVar9 == 0) {
    bVar12 = (byte)((ulonglong)uVar6 >> 0x28);
    bVar13 = CARRY1(bVar12,bVar12) || CARRY1(bVar12 * '\x02',bVar2);
    cVar14 = bVar12 * '\x02' + bVar2;
    puVar15 = (uint *)CONCAT22((short)((ulonglong)uVar6 >> 0x30),
                               CONCAT11(cVar14,(char)((ulonglong)uVar6 >> 0x20)));
    pbVar11 = (byte *)(extraout_ECX + -2);
    if (pbVar11 == (byte *)0x0 || cVar14 == '\0') {
      bVar12 = *pbVar8;
      bVar16 = *pbVar8;
      *pbVar8 = bVar16 + bVar10 + bVar13;
      if (extraout_ECX + -3 != 0 && *pbVar8 == 0) {
        *puVar15 = *puVar15 | (uint)pbVar8;
        goto code_?;
      }
      *(char *)((int)puVar15 + -0x1f) =
           *(char *)((int)puVar15 + -0x1f) + (char)(extraout_ECX + -3) +
           (CARRY1(bVar12,bVar10) || CARRY1(bVar16 + bVar10,bVar13));
      pAVar17 = (Avatar__Class *)(uVar7 + 0xa43de9e0);
      pbVar9 = (byte *)(unaff_ESI + -0x21efd21f);
      bVar10 = (byte)unaff_EBX;
      bVar2 = CARRY1(*pbVar9,bVar10) || CARRY1(*pbVar9 + bVar10,pbVar8 < (byte *)0x2de17410);
      *pbVar9 = *pbVar9 + bVar10 + (pbVar8 < (byte *)0x2de17410);
      if (extraout_ECX == 4 || *pbVar9 != 0) {
        bVar12 = *unaff_EDI;
        bVar16 = *unaff_EDI;
        *unaff_EDI = bVar16 + bVar10 + bVar2;
        cVar14 = (char)(unaff_EBX >> 8);
        if (extraout_ECX + -5 != 0) {
          bVar12 = (byte)(extraout_ECX + -5);
          *(byte *)(unaff_EBX + 0x1441c601) = *(byte *)(unaff_EBX + 0x1441c601) | bVar12;
          pMVar4 = (MethodInfo *)CONCAT31((int3)((uint)pAVar17 >> 8),4);
          pMVar4->methodPointer =
               (Il2CppMethodPointer)((int)&pMVar4->methodPointer + (int)pMVar4->methodPointer);
          pcVar18 = (char *)(CONCAT22((short)(unaff_EBX >> 0x10),CONCAT11(cVar14 * '\x02',bVar10)) +
                           0x10080);
          *pcVar18 = *pcVar18 + bVar12;
          if ((unaff_EBX & 0x3f00) != 0) {
            pcVar19 = (code *)swi(3);
            pAVar5 = (AvatarModifier *)(*pcVar19)();
            return pAVar5;
          }
          goto code_?;
        }
        *unaff_ESI = *unaff_ESI + cVar14 + (CARRY1(bVar12,bVar10) || CARRY1(bVar16 + bVar10,bVar2));
        owner = (Avatar *)(extraout_ECX + -6);
        if (owner == (Avatar *)0x0) {
          *(char *)puVar15 =
               (char)*puVar15 + (char)pAVar17 + -0x10 + (char)*puVar15 + (char)*puVar15;
          pbVar11 = (byte *)0x0;
          goto code_?;
        }
      }
      else {
        pAVar17 = owner->klass;
      }
      (owner->fields).isLocal = 0;
      pMVar4 = (pAVar17->vtable).Initialize.method;
code_?:
      pAVar5 = (AvatarModifier *)(*(code *)pMVar4)();
      return pAVar5;
    }
  }
code_?:
  *pbVar11 = *pbVar11 | (byte)pbVar11;
code_?:
  pcVar19 = (code *)swi(3);
  pAVar5 = (AvatarModifier *)(*pcVar19)();
  return pAVar5;
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

