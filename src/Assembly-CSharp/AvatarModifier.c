
/* Void Activate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Activate
               (AvatarModifier *this,Avatar_1 *target,MethodInfo *method)

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
          (AvatarModifierPackageType__Enum type,Avatar_1 *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(type) {
  case AvatarModifierPackageType__Enum_Fire:
  case AvatarModifierPackageType__Enum_FlamerBurn:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_BurningModifier;
    method_00 = BurningModifier_MethodInfo__EnumPoolManager__Instantiate<BurningModifier>_PoolEnums_
    ;
    break;
  case AvatarModifierPackageType__Enum_Mutant:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_MutantModifier;
    method_00 = MutantModifier_MethodInfo__EnumPoolManager__Instantiate<MutantModifier>_PoolEnums_;
    break;
  default:
    return (AvatarModifier *)0x0;
  case AvatarModifierPackageType__Enum_Poison:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_PoisonModifier;
    method_00 = PoisonModifier_MethodInfo__EnumPoolManager__Instantiate<PoisonModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Frozen:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_FrozenModifier;
    method_00 = FrozenModifier_MethodInfo__EnumPoolManager__Instantiate<FrozenModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_NinjaRun:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_NinjaRunModifier;
    method_00 = 
    NinjaRunModifier_MethodInfo__EnumPoolManager__Instantiate<NinjaRunModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Shrunken:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_MouseModifier;
    method_00 = MouseModifier_MethodInfo__EnumPoolManager__Instantiate<MouseModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Enlarged:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_GrowthModifier;
    method_00 = GrowthModifier_MethodInfo__EnumPoolManager__Instantiate<GrowthModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_Shielded:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 == (PrefabPool *)0x0) goto code_?;
    original = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_ShieldModifier(pPVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    this = (ImpulseRay *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (original,
                      AvatarModifier_MethodInfo__UnityEngine__Object__Instantiate<AvatarModifier>_AvatarModifier_
                     );
    goto code_?;
  case AvatarModifierPackageType__Enum_SpawnProtection:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    this = EnumPoolManager::EnumPoolManager_Instantiate_18
                     (pEVar2,PoolEnums__Enum_InvulnerabilityModifier,
                      InvulnerabilityModifier_MethodInfo__EnumPoolManager__Instantiate<InvulnerabilityModifier>_PoolEnums_
                     );
    unaff_ESI = 0;
    if (this == (ImpulseRay *)0x0) goto code_?;
    owner = (Avatar_1 *)0x11;
    XpBoostParticlePreviewer::XpBoostParticlePreviewer_set_PreviewGameObject
              ((XpBoostParticlePreviewer *)this,(GameObject *)0x11,(MethodInfo *)0x0);
    goto code_?;
  case AvatarModifierPackageType__Enum_Lethal:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_Lethal;
    method_00 = LethalModifier_MethodInfo__EnumPoolManager__Instantiate<LethalModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_HealingMat:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_HealingMat;
    method_00 = 
    HealingMatModifier_MethodInfo__EnumPoolManager__Instantiate<HealingMatModifier>_PoolEnums_;
    break;
  case AvatarModifierPackageType__Enum_CrumbleMat:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar1 == (PrefabPool *)0x0) ||
       (pEVar2 = (EnumPoolManager *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar1,
                            (MethodInfo *)0x0), pEVar2 == (EnumPoolManager *)0x0))
    goto code_?;
    pEnum = PoolEnums__Enum_CrumbleMat;
    method_00 = 
    CrumbleMatModifier_MethodInfo__EnumPoolManager__Instantiate<CrumbleMatModifier>_PoolEnums_;
  }
  this = EnumPoolManager::EnumPoolManager_Instantiate_18(pEVar2,pEnum,method_00);
code_?:
  unaff_ESI = 0;
  if (this != (ImpulseRay *)0x0) {
    (this->fields).startColor.r = (float)owner;
    return (AvatarModifier *)this;
  }
code_?:
  bVar3 = 0;
  func_?();
  iVar4 = unaff_EBX + 0x2e;
  bVar5 = (byte)((uint)iVar4 >> 8);
  bVar6 = bVar5 + (byte)unaff_EBX;
  bVar7 = CARRY1(bVar5,(byte)unaff_EBX) || CARRY1(bVar6,bVar3);
  bVar8 = (byte)iVar4;
  bVar6 = bVar6 + bVar3;
  pbVar9 = (byte *)CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(bVar6,bVar8));
  pbVar10 = (byte *)((int)extraout_EDX + 0x2b102e47);
  bVar11 = CARRY1(*pbVar10,bVar8) || CARRY1(*pbVar10 + bVar8,bVar7);
  *pbVar10 = *pbVar10 + bVar8 + bVar7;
  pbVar10 = (byte *)(extraout_EDX + 0x11);
  bVar3 = (byte)((uint)(unaff_EBX + 1) >> 8);
  bVar5 = *pbVar10 + bVar3;
  bVar7 = CARRY1(*pbVar10,bVar3) || CARRY1(bVar5,bVar11);
  *pbVar10 = bVar5 + bVar11;
  bVar5 = (byte)extraout_ECX;
  bVar11 = CARRY1(bVar5,bVar5) || CARRY1(bVar5 * '\x02',bVar7);
  bVar12 = bVar5 * '\x02' + bVar7;
  pbVar13 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar12);
  bVar3 = (byte)(unaff_EBX + 1);
  bVar5 = *pbVar9 + bVar3;
  bVar7 = CARRY1(*pbVar9,bVar3) || CARRY1(bVar5,bVar11);
  *pbVar9 = bVar5 + bVar11;
  pbVar10 = (byte *)(unaff_EDI + 0x45);
  bVar11 = CARRY1(*pbVar10,bVar6) || CARRY1(*pbVar10 + bVar6,bVar7);
  *pbVar10 = *pbVar10 + bVar6 + bVar7;
  pbVar10 = (byte *)(unaff_ESI + 0x24102e45);
  bVar3 = (byte)((uint)extraout_EDX >> 8);
  bVar5 = *pbVar10 + bVar3;
  bVar7 = CARRY1(*pbVar10,bVar3) || CARRY1(bVar5,bVar11);
  *pbVar10 = bVar5 + bVar11;
  pbVar10 = (byte *)(unaff_EBX + -0x1defd1b9);
  bVar5 = *pbVar10 + (byte)extraout_EDX;
  bVar11 = CARRY1(*pbVar10,(byte)extraout_EDX) || CARRY1(bVar5,bVar7);
  *pbVar10 = bVar5 + bVar7;
  pbVar10 = (byte *)(unaff_ESI + 2);
  bVar5 = *pbVar10;
  bVar3 = *pbVar10;
  *pbVar10 = bVar3 + bVar6 + bVar11;
  *pbVar9 = *pbVar9 + bVar8 + (CARRY1(bVar5,bVar6) || CARRY1(bVar3 + bVar6,bVar11));
  *extraout_EDX = (int)(pbVar9 + *extraout_EDX);
  *(byte *)extraout_EDX = (char)*extraout_EDX + bVar8 + (char)*extraout_EDX + (char)*extraout_EDX;
  *pbVar13 = *pbVar13 | bVar12;
  pcVar14 = (code *)swi(3);
  pAVar15 = (AvatarModifier *)(*pcVar14)();
  return pAVar15;
}


/* Void Deactivate(Avatar) */

void Assembly-CSharp.dll::AvatarModifier::AvatarModifier_Deactivate
               (AvatarModifier *this,Avatar_1 *target,MethodInfo *method)

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
  pAVar1 = (this->fields).owner;
  if (pAVar1 != (Avatar_1 *)0x0) {
    return (pAVar1->fields).isLocal;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

