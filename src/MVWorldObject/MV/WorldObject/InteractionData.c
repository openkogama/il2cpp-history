
/* InteractionData GetSharedData(InteractionPackageType) */

InteractionData *
MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_GetSharedData
          (InteractionData *__return_storage_ptr__,InteractionPackageType__Enum interactionType,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__ContainsKey_MV__WorldObject__InteractionPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__get_Item_MV__WorldObject__InteractionPackageType_
                   );
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  pDVar1 = TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::InteractionData]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__ContainsKey
                      ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)pDVar1,
                       interactionType,
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
    if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.impulse.y = (float)TypeInfo__MV__WorldObject__InteractionData;
      IStack_3.impulse.x = (float)&UNK_?;
      func_?();
    }
    pDVar1 = TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_
                   *)0x0) {
      pIVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                WorldObject::InteractionData]::
                Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__get_Item
                          (&IStack_3,
                           (Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)pDVar1,
                           interactionType,
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
  func_?();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_ESI);
  pLVar2 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (pLVar2,0x20,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  (this_00->fields)._buffer = (List_1_System_Byte_ *)pLVar2;
  func_?(&this_00->fields,pLVar2);
  this = (InteractionData *)CONCAT31(this._1_3_,this->interactionType);
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar3 = InteractionData_GetSharedData
                     ((InteractionData *)&stack0xffffffd0,(InteractionPackageType__Enum)this,
                      (MethodInfo *)0x0);
  pBVar4 = (BytePacker *)pIVar3->damage;
  fVar5 = (pIVar3->impulse).x;
  fVar6 = (pIVar3->impulse).y;
  puVar7 = (undefined *)(pIVar3->impulse).z;
  cVar8 = pIVar3->playerKilledByType;
  BytePacker::BytePacker_Write(this_00,0,(MethodInfo *)0x0);
  bVar9 = pIVar1->interactionType != 0;
  if ((bool)bVar9) {
    fVar5 = (float)(uint)pIVar1->interactionType;
    fVar6 = 0.0;
    pBVar4 = this_00;
    BytePacker::BytePacker_Write(this_00,pIVar1->interactionType,(MethodInfo *)0x0);
  }
  if ((pIVar1->damage == 0.0) || ((float)pBVar4 != 0.0)) {
code_?:
    fVar10 = (pIVar1->impulse).y;
    fVar11 = (pIVar1->impulse).x;
    fVar12 = (pIVar1->impulse).z;
    if ((fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12 <= _UNK_?) ||
       (_UNK_? < fVar5 * fVar5 + fVar6 * fVar6 + (float)puVar7 * (float)puVar7)) {
code_?:
      if ((pIVar1->playerKilledByType != 0) && (cVar8 == '\0')) {
        BytePacker::BytePacker_Write(this_00,pIVar1->playerKilledByType,(MethodInfo *)0x0);
        bVar9 = bVar9 | 8;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar2 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)(this_00->fields)._buffer;
      if (pLVar2 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) {
        pMVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                            (pLVar2,
                             MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                            );
        if (pMVar13 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          if (pMVar13->max_length != 0) {
            *(byte *)&pMVar13->vector[0].index = bVar9;
            return (Byte__Array *)pMVar13;
          }
          goto code_?;
        }
      }
    }
    else {
      pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                          ((pIVar1->impulse).x,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar14,(MethodInfo *)0x0);
      if (pBVar14 != (Byte__Array *)0x0) {
        pBVar4 = this_00;
        BytePacker::BytePacker_Write_2(this_00,pBVar14,0,pBVar14->max_length,(MethodInfo *)0x0);
        cVar8 = (char)((uint)pBVar4 >> 8);
        pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                            ((pIVar1->impulse).y,(MethodInfo *)0x0);
        mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar14,(MethodInfo *)0x0);
        if (pBVar14 != (Byte__Array *)0x0) {
          BytePacker::BytePacker_Write_2(this_00,pBVar14,0,pBVar14->max_length,(MethodInfo *)0x0);
          pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                              ((pIVar1->impulse).z,(MethodInfo *)0x0);
          mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar14,(MethodInfo *)0x0);
          if (pBVar14 != (Byte__Array *)0x0) {
            BytePacker::BytePacker_Write_2(this_00,pBVar14,0,pBVar14->max_length,(MethodInfo *)0x0);
            bVar9 = bVar9 | 4;
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pBVar14 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_8
                        (pIVar1->damage,(MethodInfo *)0x0);
    puVar7 = &UNK_?;
    mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar14,(MethodInfo *)0x0);
    if (pBVar14 != (Byte__Array *)0x0) {
      pBVar4 = this_00;
      BytePacker::BytePacker_Write_2(this_00,pBVar14,0,pBVar14->max_length,(MethodInfo *)0x0);
      cVar8 = (char)((uint)pBVar4 >> 8);
      bVar9 = bVar9 | 2;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pBVar14 = (Byte__Array *)(*pcVar15)();
  return pBVar14;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData_ToString
                   (InteractionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionPackageType);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__MV__Common__PlayerKilledByType);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_damage___0___AvatarPackageType__);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  fStack_1 = this->damage;
  pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    uStack_5 = this->interactionType;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__InteractionPackageType,&uStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    func_?(args->vector + 1,pOVar2);
    fStack_6 = (this->impulse).z;
    uStack_7._0_4_ = (this->impulse).x;
    uStack_7._4_4_ = (this->impulse).y;
    pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&uStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    uStack_8 = this->playerKilledByType;
    pOVar2 = (Object *)func_?(TypeInfo__MV__Common__PlayerKilledByType,&uStack_8);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (3 < args->max_length) {
      args->vector[3] = pOVar2;
      func_?(args->vector + 3,pOVar2);
      pSVar9 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_damage___0___AvatarPackageType__,args,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
code_?:
  func_?();
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
  if ((damage == 0.0) || (sharedInteractionData.damage == 0.0)) {
    if ((impulse.y * impulse.y + impulse.x * impulse.x + impulse.z * impulse.z <= _UNK_?) ||
       (sharedInteractionData.impulse.x * sharedInteractionData.impulse.x +
        sharedInteractionData.impulse.y * sharedInteractionData.impulse.y +
        sharedInteractionData.impulse.z * sharedInteractionData.impulse.z <= _UNK_?)) {
      if (((undefined1)playerKilledByType == PlayerKilledByType__Enum_None) ||
         (sharedInteractionData.playerKilledByType == 0)) {
        return;
      }
      damage = (float)CONCAT13((undefined1)interactionType,damage._0_3_);
      uVar1 = func_?(&TypeInfo__MV__WorldObject__InteractionPackageType,(int)&damage + 3);
      arg1 = (Object *)func_?(uVar1);
      ppSVar2 = &StringLiteral_Both_sharedValues_playerKilledBy;
    }
    else {
      damage = (float)CONCAT13((undefined1)interactionType,damage._0_3_);
      uVar1 = func_?(&TypeInfo__MV__WorldObject__InteractionPackageType,(int)&damage + 3);
      arg1 = (Object *)func_?(uVar1);
      ppSVar2 = &StringLiteral_Both_sharedValues_impulse_and_co;
    }
  }
  else {
    damage = (float)CONCAT13((undefined1)interactionType,damage._0_3_);
    uVar1 = func_?(&TypeInfo__MV__WorldObject__InteractionPackageType,(int)&damage + 3);
    arg1 = (Object *)func_?(uVar1);
    ppSVar2 = &StringLiteral_Both_sharedValues_damage_and_con;
  }
  method_00 = (MethodInfo *)0x0;
  arg0 = (Object *)func_?(ppSVar2);
  message = mscorlib.dll::System::String::String_Concat(arg0,arg1,method_00);
  uVar1 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar1);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,message,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__MV__WorldObject__InteractionData__Validate_MethodInfo__MV__WorldObject__InteractionData__MV__WorldObject__InteractionPackageType__float__UnityEngine__Vector3__MV__Common__PlayerKilledByType_
                 );
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      return bVar1;
    }
  }
  return 0;
}


/* InteractionData() */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
         func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Dictionary__
            );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar1._0_1_ = 0;
  uVar1._1_1_ = 0;
  uVar1._2_2_ = 0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  InteractionData__ctor_6
            ((InteractionData *)&stack0xffffffe8,InteractionPackageType__Enum_CenterGun,11.5,
             TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,PlayerKilledByType__Enum_None
             ,1,(MethodInfo *)0x0);
  if (this != (Dictionary_2_MV_WorldObject_InteractionPackageType_MV_WorldObject_InteractionData_ *)
              0x0) {
    value_05.impulse.x = fVar3;
    value_05.damage = fVar2;
    value_05.impulse.y = fVar4;
    value_05.impulse.z = fVar5;
    value_05.interactionType = (uint8_t)uVar1;
    value_05.playerKilledByType = SUB41(uVar1,1);
    value_05._18_2_ = SUB42(uVar1,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,9,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar6._0_1_ = 0;
    uVar6._1_1_ = 0;
    uVar6._2_2_ = 0;
    puStack_7 = (undefined *)0x0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    InteractionData__ctor_6
              ((InteractionData *)&puStack_7,InteractionPackageType__Enum_MutantHit,110.0,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value_06.impulse.x = fVar2;
    value_06.damage = (float)puStack_7;
    value_06.impulse.y = fVar3;
    value_06.impulse.z = fVar4;
    value_06.interactionType = (uint8_t)uVar6;
    value_06.playerKilledByType = SUB41(uVar6,1);
    value_06._18_2_ = SUB42(uVar6,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,6,value_06,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9._0_1_ = 0;
    uVar9._1_1_ = 0;
    uVar9._2_2_ = 0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar2 = (pVVar8->zeroVector).y;
    fVar3 = (pVVar8->zeroVector).z;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffffc0,InteractionPackageType__Enum_RailGunHit,100.0,
               pVVar8->zeroVector,PlayerKilledByType__Enum_None,0,(MethodInfo *)0x0);
    value_07.impulse.x = fVar3;
    value_07.damage = fVar2;
    value_07.impulse.y = fVar4;
    value_07.impulse.z = fVar5;
    value_07.interactionType = (uint8_t)uVar9;
    value_07.playerKilledByType = SUB41(uVar9,1);
    value_07._18_2_ = SUB42(uVar9,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,4,value_07,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar10._0_1_ = 0;
    uVar10._1_1_ = 0;
    uVar10._2_2_ = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    fStack11 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffffac,InteractionPackageType__Enum_ShotgunHit,13.0,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value.impulse.x = fVar3;
    value.damage = fVar2;
    value.impulse.y = fVar4;
    value.impulse.z = fVar5;
    value.interactionType = (uint8_t)uVar10;
    value.playerKilledByType = SUB41(uVar10,1);
    value._18_2_ = SUB42(uVar10,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,7,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar12._0_1_ = 0;
    uVar12._1_1_ = 0;
    uVar12._2_2_ = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffff98,InteractionPackageType__Enum_SixShooterHit,12.5,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value_00.impulse.x = fVar3;
    value_00.damage = fVar2;
    value_00.impulse.y = fVar4;
    value_00.impulse.z = fVar5;
    value_00.interactionType = (uint8_t)uVar12;
    value_00.playerKilledByType = SUB41(uVar12,1);
    value_00._18_2_ = SUB42(uVar12,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,0xe,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar13._0_1_ = 0;
    uVar13._1_1_ = 0;
    uVar13._2_2_ = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffff84,InteractionPackageType__Enum_DoubleSixShooterHit,
               12.5,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value_01.impulse.x = fVar3;
    value_01.damage = fVar2;
    value_01.impulse.y = fVar4;
    value_01.impulse.z = 0.0;
    value_01.interactionType = (uint8_t)uVar13;
    value_01.playerKilledByType = SUB41(uVar13,1);
    value_01._18_2_ = SUB42(uVar13,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,0x19,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar14._0_1_ = 0;
    uVar14._1_1_ = 0;
    uVar14._2_2_ = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffff70,InteractionPackageType__Enum_ThrowingStarHit,15.0
               ,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value_02.impulse.x = fVar3;
    value_02.damage = fVar2;
    value_02.impulse.y = fVar4;
    value_02.impulse.z = fVar5;
    value_02.interactionType = (uint8_t)uVar14;
    value_02.playerKilledByType = SUB41(uVar14,1);
    value_02._18_2_ = SUB42(uVar14,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,0xf,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar15._0_1_ = 0;
    uVar15._1_1_ = 0;
    uVar15._2_2_ = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffff5c,InteractionPackageType__Enum_MultiThrowingStarHit
               ,12.0,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value_03.impulse.x = fVar3;
    value_03.damage = fVar2;
    value_03.impulse.y = fVar4;
    value_03.impulse.z = fVar5;
    value_03.interactionType = (uint8_t)uVar15;
    value_03.playerKilledByType = SUB41(uVar15,1);
    value_03._18_2_ = SUB42(uVar15,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,0x18,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar16._0_1_ = 0;
    uVar16._1_1_ = 0;
    uVar16._2_2_ = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    InteractionData__ctor_6
              ((InteractionData *)&stack0xffffff48,InteractionPackageType__Enum_SlapGunHit,25.0,
               TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
               PlayerKilledByType__Enum_None,1,(MethodInfo *)0x0);
    value_04.impulse.x = 0.0;
    value_04.damage = fVar2;
    value_04.impulse.y = fVar3;
    value_04.impulse.z = fVar4;
    value_04.interactionType = (uint8_t)uVar16;
    value_04.playerKilledByType = SUB41(uVar16,1);
    value_04._18_2_ = SUB42(uVar16,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    InteractionData]::Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData__Add
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_InteractionData_ *)this,0x1a,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_MV::WorldObject::InteractionData>__Add_MV__WorldObject__InteractionPackageType__MV__WorldObject__InteractionData_
              );
    TypeInfo__MV__WorldObject__InteractionData->static_fields->sharedStaticValues = this;
    func_?();
    return;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  InteractionData__ctor_5
            (&IStack_1,interactionType,0.0,
             TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,PlayerKilledByType__Enum_None
             ,(MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Vector3) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_1
               (InteractionData *this,InteractionPackageType__Enum interactionType,Vector3 impulse,
               MethodInfo *method)

{
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  InteractionData__ctor_5
            (&IStack_1,interactionType,0.0,impulse,PlayerKilledByType__Enum_None,(MethodInfo *)0x0)
  ;
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_2
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 impulse,MethodInfo *method)

{
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  InteractionData__ctor_5
            (&IStack_1,interactionType,damage,impulse,PlayerKilledByType__Enum_None,
             (MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
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
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  InteractionData__ctor_5
            (&IStack_1,interactionType,0.0,
             TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,playerKilledByType,
             (MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_4
               (InteractionData *this,InteractionPackageType__Enum interactionType,Vector3 impulse,
               PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  InteractionData__ctor_5
            (&IStack_1,interactionType,0.0,impulse,playerKilledByType,(MethodInfo *)0x0);
  this->damage = IStack_1.damage;
  (this->impulse).x = IStack_1.impulse.x;
  (this->impulse).y = IStack_1.impulse.y;
  (this->impulse).z = IStack_1.impulse.z;
  this->interactionType = IStack_1.interactionType;
  this->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&this->field_0x12 = IStack_1._18_2_;
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3, PlayerKilledByType) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 impulse,PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  validateFloat = impulse.z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this->interactionType = (uint8_t)interactionType;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar1 = InteractionData_GetSharedData(&IStack_2,interactionType,(MethodInfo *)0x0);
  fStack_3 = pIVar1->damage;
  fStack_4 = (pIVar1->impulse).x;
  fStack_5 = (pIVar1->impulse).y;
  fStack_6 = (pIVar1->impulse).z;
  InteractionData_Validate
            (*pIVar1,interactionType,damage,impulse,playerKilledByType,(MethodInfo *)0x0);
  bVar7 = MVMath::MVMath_ValidateFloat(damage,(MethodInfo *)0x0);
  fVar8 = damage;
  if (bVar7 == 0) {
    fVar8 = 0.0;
  }
  this->damage = fVar8;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  interactionType._1_1_ = InteractionPackageType__Enum_None >> 8;
  bVar7 = MVMath::MVMath_ValidateFloat(impulse.x,(MethodInfo *)0x0);
  uVar9 = interactionType._1_1_;
  if (bVar7 != 0) {
    impulse.x = 0.0;
    damage = impulse.y;
    interactionType._1_1_ = 0x8c;
    uVar9 = interactionType._1_1_;
    interactionType._1_1_ = 0x8c;
    bVar7 = MVMath::MVMath_ValidateFloat(impulse.y,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      impulse.z = 0.0;
      impulse.y = validateFloat;
      impulse.x = (float)&UNK_?;
      bVar7 = MVMath::MVMath_ValidateFloat(validateFloat,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        uVar10 = CONCAT44(validateFloat,&UNK_?);
        goto code_?;
      }
    }
  }
  interactionType._1_1_ = uVar9;
  if (cRam_? == '\0') {
    playerKilledByType = (PlayerKilledByType__Enum)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar10._0_4_ = (pVVar11->zeroVector).x;
  uVar10._4_4_ = (pVVar11->zeroVector).y;
  validateFloat = (pVVar11->zeroVector).z;
code_?:
  (this->impulse).x = (float)(int)uVar10;
  (this->impulse).y = (float)(int)((ulonglong)uVar10 >> 0x20);
  (this->impulse).z = validateFloat;
  this->playerKilledByType = (uint8_t)playerKilledByType;
  if (damage == 0.0) {
    this->damage = fStack_3;
  }
  if (impulse.y * impulse.y + impulse.x * impulse.x + impulse.z * impulse.z <= _UNK_?) {
    (this->impulse).x = fStack_4;
    (this->impulse).y = fStack_5;
    (this->impulse).z = fStack_6;
  }
  if ((uint8_t)playerKilledByType == 0) {
    this->playerKilledByType = interactionType._1_1_;
  }
  return;
}


/* InteractionData(InteractionPackageType, Single, Vector3, PlayerKilledByType, Boolean) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_6
               (InteractionData *this,InteractionPackageType__Enum interactionType,float damage,
               Vector3 impulse,PlayerKilledByType__Enum playerKilledByType,bool isShared,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  this->interactionType = (undefined1)interactionType;
  bVar1 = MVMath::MVMath_ValidateFloat(damage,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    damage = 0.0;
  }
  this->damage = damage;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  bVar1 = MVMath::MVMath_ValidateFloat(impulse.x,(MethodInfo *)0x0);
  if (((bVar1 != 0) &&
      (bVar1 = MVMath::MVMath_ValidateFloat(impulse.y,(MethodInfo *)0x0), bVar1 != 0)) &&
     (bVar1 = MVMath::MVMath_ValidateFloat(impulse.z,(MethodInfo *)0x0), bVar1 != 0)) {
    (this->impulse).x = (float)(int)impulse._0_8_;
    (this->impulse).y = (float)(int)((ulonglong)impulse._0_8_ >> 0x20);
    (this->impulse).z = impulse.z;
    this->playerKilledByType = (undefined1)playerKilledByType;
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->impulse).x = (pVVar2->zeroVector).x;
  (this->impulse).y = fVar3;
  (this->impulse).z = fVar4;
  this->playerKilledByType = (undefined1)playerKilledByType;
  return;
}


/* InteractionData(Byte[]) */

void MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_7
               (InteractionData *this,Byte__Array *byteArray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  this->damage = 0.0;
  this->interactionType = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->impulse).x = (pVVar1->zeroVector).x;
  (this->impulse).y = fVar2;
  (this->impulse).z = fVar3;
  this->playerKilledByType = 0;
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_EDI);
  if (byteArray != (Byte__Array *)0x0) {
    this_01 = (List_1_System_Byte_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
              (this_01,(IEnumerable_1_System_Byte_ *)byteArray,
               MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    (this_00->fields)._buffer = this_01;
    func_?(&this_00->fields,this_01);
    uVar4 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
    if ((uVar4 & 1) != 0) {
      uVar5 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
      this->interactionType = uVar5;
    }
    IStack_6 = CONCAT31(IStack_6._1_3_,this->interactionType);
    if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__InteractionData);
    }
    pIVar7 = InteractionData_GetSharedData
                       ((InteractionData *)auStack_8,IStack_6,(MethodInfo *)0x0);
    fVar3 = (pIVar7->impulse).x;
    fVar2 = (pIVar7->impulse).y;
    fVar9 = (pIVar7->impulse).z;
    uVar5 = pIVar7->playerKilledByType;
    if ((uVar4 & 2) == 0) {
      this->damage = pIVar7->damage;
    }
    else {
      pBVar10 = BytePacker::BytePacker_ReadBytes(this_00,4,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar10,(MethodInfo *)0x0);
      fVar11 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar10,0,(MethodInfo *)0x0);
      this->damage = fVar11;
    }
    if ((uVar4 & 4) == 0) {
      (this->impulse).x = fVar3;
      (this->impulse).y = fVar2;
    }
    else {
      auStack_8._16_4_ = &UNK_?;
      pBVar10 = BytePacker::BytePacker_ReadBytes(this_00,4,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar10,(MethodInfo *)0x0);
      auStack_8._16_4_ = &UNK_?;
      fVar3 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar10,0,(MethodInfo *)0x0);
      auStack_8._16_4_ = &UNK_?;
      pBVar10 = BytePacker::BytePacker_ReadBytes(this_00,4,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar10,(MethodInfo *)0x0);
      uVar5 = 0;
      auStack_8._16_4_ = &UNK_?;
      fVar2 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar10,0,(MethodInfo *)0x0)
      ;
      pBVar10 = BytePacker::BytePacker_ReadBytes(this_00,4,(MethodInfo *)0x0);
      mscorlib.dll::System::Array::Array_Reverse((Array *)pBVar10,(MethodInfo *)0x0);
      fVar9 = mscorlib.dll::System::BitConverter::BitConverter_ToSingle(pBVar10,0,(MethodInfo *)0x0)
      ;
      (this->impulse).x = fVar3;
      (this->impulse).y = fVar2;
      auStack_8._16_4_ = fVar9;
    }
    (this->impulse).z = fVar9;
    if ((uVar4 & 8) == 0) {
      this->playerKilledByType = uVar5;
      return;
    }
    uVar4 = BytePacker::BytePacker_ReadByte(this_00,(MethodInfo *)0x0);
    this->playerKilledByType = uVar4;
    return;
  }
  uVar12 = func_?(&TypeInfo__System__ArgumentNullException);
  this_02 = (ArgumentNullException *)func_?(uVar12);
  message = (String *)func_?(&StringLiteral_The_buffer_cannot_be_null_);
  paramName = (String *)func_?(&StringLiteral_buffer);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_02,paramName,message,(MethodInfo *)0x0);
  uVar12 = func_?(&MethodInfo__MV__WorldObject__BytePacker__BytePacker_System__Byte____);
  func_?(this_02,uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

