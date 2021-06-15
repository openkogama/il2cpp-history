
/* InteractionData GetSharedData(InteractionPackageType) */

InteractionData *
MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_GetSharedData
          (InteractionData *__return_storage_ptr__,InteractionPackageType__Enum interactionType,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__InteractionData->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  pDVar1 = TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            InteractionPackageType,MV::WorldObject::InteractionData]::
            Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__ContainsKey
                      (pDVar1,interactionType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__ContainsKey_MV__WorldObject__InteractionPackageType_
                      );
    if (bVar2 == 0) {
      __return_storage_ptr__->damage = 0.0;
      (__return_storage_ptr__->impulse).x = 0.0;
      (__return_storage_ptr__->impulse).y = 0.0;
      (__return_storage_ptr__->impulse).z = 0.0;
      __return_storage_ptr__->interactionType = 0;
      __return_storage_ptr__->playerKilledByType = 0;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
      return __return_storage_ptr__;
    }
    if ((((uint)(TypeInfo__MV__WorldObject__InteractionData->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_started == 0)) {
      IStack_3.impulse.y = (float)TypeInfo__MV__WorldObject__InteractionData;
      IStack_3.impulse.x = (float)&UNK_?;
      func_?();
    }
    pDVar1 = TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                   *)0x0) {
      pIVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                InteractionPackageType,MV::WorldObject::InteractionData]::
                Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__get_Item
                          (&IStack_3,pDVar1,interactionType,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__get_Item_MV__WorldObject__InteractionPackageType_
                          );
      fVar5 = (pIVar4->impulse).x;
      fVar6 = (pIVar4->impulse).y;
      fVar7 = (pIVar4->impulse).z;
      uVar8 = pIVar4->interactionType;
      uVar9 = pIVar4->playerKilledByType;
      uVar10 = *(undefined2 *)&pIVar4->field_0x12;
      __return_storage_ptr__->damage = pIVar4->damage;
      (__return_storage_ptr__->impulse).x = fVar5;
      (__return_storage_ptr__->impulse).y = fVar6;
      (__return_storage_ptr__->impulse).z = fVar7;
      __return_storage_ptr__->interactionType = uVar8;
      __return_storage_ptr__->playerKilledByType = uVar9;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar10;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  pIVar4 = (InteractionData *)(*pcVar11)();
  return pIVar4;
}


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToByteArray
          (InteractionData *this,MethodInfo *method)

{
  pIVar1 = this;
  pfVar2 = &(this->impulse).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (ScaleAnimationBase *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_ESI);
  this_02 = (List_1_System_Byte__1 *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1__ctor_1
            (this_02,0x20,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  (this_01->fields)._._._._.m_CachedPtr = this_02;
  pIVar3 = this + 1;
  this = (InteractionData *)CONCAT31((int3)((uint)pfVar2 >> 8),*(undefined1 *)&(pIVar3->impulse).x);
  if ((((uint)(TypeInfo__MV__WorldObject__InteractionData->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar3 = InteractionData_GetSharedData
                     ((InteractionData *)&stack0xffffffd4,(InteractionPackageType__Enum)this,
                      (MethodInfo *)0x0);
  pSVar4 = (ScaleAnimationBase *)pIVar3->damage;
  BytePacker::BytePacker_Write((BytePacker *)this_01,0,(MethodInfo *)0x0);
  uVar5 = *(uint8_t *)&pIVar1[1].impulse.x;
  bVar6 = uVar5 != 0;
  if ((bool)bVar6) {
    pSVar4 = this_01;
    BytePacker::BytePacker_Write((BytePacker *)this_01,uVar5,(MethodInfo *)0x0);
  }
  value = *pfVar2;
  if ((value != 0.0) && ((float)pSVar4 == 0.0)) {
    BytePacker::BytePacker_Write_7((BytePacker *)this_01,value,(MethodInfo *)0x0);
    bVar6 = bVar6 | 2;
  }
  cVar7 = (char)((uint)&(pIVar1->impulse).z >> 8);
  fVar8 = (float10)func_?();
  if (_UNK_? < (float)fVar8) {
    cVar7 = (char)((uint)&stack0xffffffec >> 8);
    fVar8 = (float10)func_?();
    if ((float)fVar8 <= _UNK_?) {
      BytePacker::BytePacker_Write_7((BytePacker *)this_01,(pIVar1->impulse).z,(MethodInfo *)0x0);
      BytePacker::BytePacker_Write_7
                ((BytePacker *)this_01,*(float *)&pIVar1->interactionType,(MethodInfo *)0x0);
      BytePacker::BytePacker_Write_7((BytePacker *)this_01,pIVar1[1].damage,(MethodInfo *)0x0);
      bVar6 = bVar6 | 4;
    }
  }
  uVar5 = *(uint8_t *)((int)&pIVar1[1].impulse.x + 1);
  if ((uVar5 != 0) && (cVar7 == '\0')) {
    BytePacker::BytePacker_Write((BytePacker *)this_01,uVar5,(MethodInfo *)0x0);
    bVar6 = bVar6 | 8;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this_01->fields)._._._._.m_CachedPtr;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar9 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    if (pVVar9 != (VoxelHit__Array *)0x0) {
      if (pVVar9->max_length != 0) {
        *(byte *)&pVVar9->vector[0].point.x = bVar6;
        return (Byte__Array *)pVVar9;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uStack10 = 0;
  uStack11 = 0;
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pBVar13 = (Byte__Array *)(*pcVar12)();
  return pBVar13;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToString
                   (InteractionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  fStack_1 = (this->impulse).y;
  pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    uStack_5 = *(undefined1 *)&this[1].impulse.x;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__InteractionPackageType,&uStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    fStack_6 = this[1].damage;
    uStack_7 = *(undefined8 *)&(this->impulse).z;
    pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&uStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    uStack_8 = *(undefined1 *)((int)&this[1].impulse.x + 1);
    pOVar2 = (Object *)func_?(TypeInfo__MV__Common__PlayerKilledByType,&uStack_8);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_damage___0___AvatarPackageType__,args,(MethodInfo *)0x0);
        return pSVar9;
      }
      goto code_?;
    }
    iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* Void Validate(InteractionData, InteractionPackageType, Single, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_Validate
               (InteractionData sharedInteractionData,InteractionPackageType__Enum interactionType,
               float damage,Vector3 impulse,PlayerKilledByType__Enum playerKilledByType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((damage == 0.0) || (sharedInteractionData.damage == 0.0)) {
    fVar1 = (float10)func_?(&impulse,0);
    damage = (float)fVar1;
    if (_UNK_? < damage) {
      fVar1 = (float10)func_?(&sharedInteractionData.impulse,0);
      damage = (float)fVar1;
      if (_UNK_? < damage) goto code_?;
    }
    if (((undefined1)playerKilledByType == PlayerKilledByType__Enum_None) ||
       (sharedInteractionData.playerKilledByType == 0)) {
      return;
    }
  }
  else {
    damage = (float)CONCAT13((undefined1)interactionType,damage._0_3_);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__InteractionPackageType,(int)&damage + 3);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Both_sharedValues_damage_and_con,pOVar2,
                        (MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    sharedInteractionData.impulse.x =
         (float)
         MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
    ;
    sharedInteractionData.damage = 0.0;
    func_?();
code_?:
    damage = (float)CONCAT13((undefined1)interactionType,damage._0_3_);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__InteractionPackageType,(int)&damage + 3);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Both_sharedValues_impulse_and_co,pOVar2,
                        (MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    sharedInteractionData.impulse.x =
         (float)
         MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
    ;
    sharedInteractionData.damage = 0.0;
    func_?();
  }
  damage = (float)CONCAT13((undefined1)interactionType,damage._0_3_);
  pOVar2 = (Object *)
           func_?(TypeInfo__MV__WorldObject__InteractionPackageType,(int)&damage + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Both_sharedValues_playerKilledBy,pOVar2,
                      (MethodInfo *)0x0);
  pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
  sharedInteractionData.impulse.x =
       (float)
       MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
  ;
  sharedInteractionData.damage = 0.0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean ValidateVector3(Vector3) */

bool MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ValidateVector3
               (Vector3 validateVector,MethodInfo *method)

{
  bVar1 = MVMath::MVMath_ValidateFloat(validateVector.x,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = MVMath::MVMath_ValidateFloat(validateVector.y,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = MVMath::MVMath_ValidateFloat(validateVector.z,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* InteractionData() */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
         func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Dictionary__
            );
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
            ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  uVar1 = 1;
  uVar2 = 0;
  func_?(&stack0xffffffdc,9,0x41380000);
  if (this != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
              0x0) {
    value_06.impulse.x = (float)uVar1;
    value_06.damage = (float)uVar2;
    value_06.impulse.y =
         (float)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
    ;
    value_06.impulse.z = 0.0;
    value_06.interactionType = 0;
    value_06.playerKilledByType = 0;
    value_06._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_CenterGun,value_06,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    func_?();
    fVar4 = (float)uVar1;
    fVar5 = (float)uVar2;
    uVar6 = CONCAT44(fVar4,fVar5);
    method = (MethodInfo *)&UNK_?;
    fVar7 = (float)uVar3;
    stack0x00000008 = &stack0xffffffdc;
    IVar8 = (InteractionData)CONCAT128(auVar9,uVar6);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_MutantHit,IVar8,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack10 = &stack0xffffffdc;
    func_?();
    IVar8.impulse.x = (float)uVar1;
    IVar8.damage = (float)uVar2;
    IVar8.impulse.y = (float)uVar3;
    IVar8.impulse.z = 0.0;
    IVar8.interactionType = 0;
    IVar8.playerKilledByType = 0;
    IVar8._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_RailGunHit,IVar8,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack11 = &stack0xffffffdc;
    func_?();
    value.impulse.x = (float)uVar1;
    value.damage = (float)uVar2;
    value.impulse.y = (float)uVar3;
    value.impulse.z = 0.0;
    value.interactionType = 0;
    value.playerKilledByType = 0;
    value._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_ShotgunHit,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack12 = &stack0xffffffdc;
    func_?();
    value_00.impulse.x = (float)uVar1;
    value_00.damage = (float)uVar2;
    value_00.impulse.y = (float)uVar3;
    value_00.impulse.z = 0.0;
    value_00.interactionType = 0;
    value_00.playerKilledByType = 0;
    value_00._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_SixShooterHit,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack13 = &stack0xffffffdc;
    func_?();
    value_01.impulse.x = (float)uVar1;
    value_01.damage = (float)uVar2;
    value_01.impulse.y = (float)uVar3;
    value_01.impulse.z = 0.0;
    value_01.interactionType = 0;
    value_01.playerKilledByType = 0;
    value_01._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_DoubleSixShooterHit,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack14 = &stack0xffffffdc;
    func_?();
    value_02.impulse.x = (float)uVar1;
    value_02.damage = (float)uVar2;
    value_02.impulse.y = (float)uVar3;
    value_02.impulse.z = 0.0;
    value_02.interactionType = 0;
    value_02.playerKilledByType = 0;
    value_02._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_SwordHit,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack15 = &stack0xffffffdc;
    func_?();
    value_03.impulse.x = (float)uVar1;
    value_03.damage = (float)uVar2;
    value_03.impulse.y = (float)uVar3;
    value_03.impulse.z = 0.0;
    value_03.interactionType = 0;
    value_03.playerKilledByType = 0;
    value_03._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_ThrowingStarHit,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack16 = &stack0xffffffdc;
    func_?();
    value_04.impulse.x = (float)uVar1;
    value_04.damage = (float)uVar2;
    value_04.impulse.y = (float)uVar3;
    value_04.impulse.z = 0.0;
    value_04.interactionType = 0;
    value_04.playerKilledByType = 0;
    value_04._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_MultiThrowingStarHit,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    puStack17 = &stack0xffffffdc;
    func_?();
    value_05.impulse.x = (float)uVar1;
    value_05.damage = (float)uVar2;
    value_05.impulse.y = (float)uVar3;
    value_05.impulse.z = 0.0;
    value_05.interactionType = 0;
    value_05.playerKilledByType = 0;
    value_05._18_2_ = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
    InteractionPackageType,MV::WorldObject::InteractionData]::
    Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData__Add
              (this,InteractionPackageType__Enum_SlapGunHit,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues = this;
    return;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* InteractionData(InteractionPackageType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
               (InteractionData *this,InteractionPackageType__Enum interactionType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero(&VStack_1,(MethodInfo *)0x0);
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  func_?(&fStack_6,interactionType,0);
  (this->impulse).y = fStack_6;
  (this->impulse).z = fStack_3;
  this->interactionType = (undefined1)uStack_4;
  this->playerKilledByType = uStack_4._1_1_;
  *(undefined2 *)&this->field_0x12 = uStack_4._2_2_;
  this[1].damage = fStack_5;
  this[1].impulse.x = fStack_2;
  return;
}


/* InteractionData(InteractionPackageType, Vector3) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_1
               (InteractionData *this,InteractionPackageType__Enum interactionType,Vector3 impulse,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  func_?(&fStack_2,interactionType,0);
  (this->impulse).y = fStack_2;
  (this->impulse).z = fStack_3;
  this->interactionType = (undefined1)uStack_4;
  this->playerKilledByType = uStack_4._1_1_;
  *(undefined2 *)&this->field_0x12 = uStack_4._2_2_;
  this[1].damage = fStack_5;
  this[1].impulse.x = fStack_1;
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_2
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 impulse,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  func_?(&fStack_2,interactionType,damage);
  (this->impulse).y = fStack_2;
  (this->impulse).z = fStack_3;
  this->interactionType = (undefined1)uStack_4;
  this->playerKilledByType = uStack_4._1_1_;
  *(undefined2 *)&this->field_0x12 = uStack_4._2_2_;
  this[1].damage = fStack_5;
  this[1].impulse.x = fStack_1;
  return;
}


/* InteractionData(InteractionPackageType, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_3
               (InteractionData *this,InteractionPackageType__Enum interactionType,
               PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero(&VStack_1,(MethodInfo *)0x0);
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  func_?(&fStack_6,interactionType,0);
  (this->impulse).y = fStack_6;
  (this->impulse).z = fStack_3;
  this->interactionType = (undefined1)uStack_4;
  this->playerKilledByType = uStack_4._1_1_;
  *(undefined2 *)&this->field_0x12 = uStack_4._2_2_;
  this[1].damage = fStack_5;
  this[1].impulse.x = fStack_2;
  return;
}


/* InteractionData(InteractionPackageType, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_4
               (InteractionData *this,InteractionPackageType__Enum interactionType,Vector3 impulse,
               PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  func_?(&fStack_1,interactionType,0);
  (this->impulse).y = fStack_1;
  (this->impulse).z = fStack_2;
  this->interactionType = (undefined1)uStack_3;
  this->playerKilledByType = uStack_3._1_1_;
  *(undefined2 *)&this->field_0x12 = uStack_3._2_2_;
  this[1].damage = fStack_4;
  this[1].impulse.x = fStack_5;
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 impulse,PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  func_?(&(this->impulse).y,interactionType,damage);
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3, PlayerKilledByType, Boolean) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_6
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 impulse,PlayerKilledByType__Enum playerKilledByType,bool isShared,
               MethodInfo *method)

{
  func_?(&(this->impulse).y,interactionType,damage);
  return;
}


/* InteractionData(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_7
               (InteractionData *this,Byte__Array *byteArray,MethodInfo *method)

{
  pIVar1 = this;
  pfVar2 = &(this->impulse).y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *pfVar2 = 0.0;
  *(undefined1 *)&this[1].impulse.x = 0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  fVar4 = pVVar3->z;
  *(undefined8 *)&(this->impulse).z = *(undefined8 *)pVVar3;
  this[1].damage = fVar4;
  *(undefined1 *)((int)&this[1].impulse.x + 1) = 0;
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  BytePacker::BytePacker__ctor_1(this_00,byteArray,(MethodInfo *)0x0);
  if (this_00 == (BytePacker *)0x0) {
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
  if ((uVar6 & 1) != 0) {
    uVar7 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
    *(uint8_t *)&this[1].impulse.x = uVar7;
  }
  pIVar8 = this + 1;
  this = (InteractionData *)CONCAT31((int3)((uint)pfVar2 >> 8),*(undefined1 *)&(pIVar8->impulse).x);
  if ((((uint)(TypeInfo__MV__WorldObject__InteractionData->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar8 = InteractionData_GetSharedData
                     ((InteractionData *)&stack0xffffffcc,(InteractionPackageType__Enum)this,
                      (MethodInfo *)0x0);
  puStack_9 = (undefined *)(pIVar8->impulse).x;
  pBVar10 = (BytePacker *)(pIVar8->impulse).y;
  fVar4 = (pIVar8->impulse).z;
  uVar11 = pIVar8->playerKilledByType;
  if ((uVar6 & 2) == 0) {
    *pfVar2 = pIVar8->damage;
  }
  else {
    fVar4 = 0.0;
    pBVar10 = this_00;
    fVar12 = BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
    *pfVar2 = fVar12;
  }
  if ((uVar6 & 4) == 0) {
    uVar13 = CONCAT44(pBVar10,puStack_9);
  }
  else {
    BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
    BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
    uVar11 = 0;
    BytePacker::BytePacker_ReadSingle(this_00,(MethodInfo *)0x0);
    fVar4 = 0.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
    func_?();
    uVar13 = CONCAT44(fVar14,fVar12);
  }
  *(undefined8 *)&(pIVar1->impulse).z = uVar13;
  pIVar1[1].damage = fVar4;
  if ((uVar6 & 8) == 0) {
    *(undefined1 *)((int)&pIVar1[1].impulse.x + 1) = uVar11;
    return;
  }
  uVar6 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
  *(uint8_t *)((int)&pIVar1[1].impulse.x + 1) = uVar6;
  return;
}


/* PlayerKilledByType get_PlayerKilledByType() */

PlayerKilledByType__Enum
MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_get_PlayerKilledByType
          (InteractionData *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),*(undefined1 *)((int)&this[1].impulse.x + 1));
}

