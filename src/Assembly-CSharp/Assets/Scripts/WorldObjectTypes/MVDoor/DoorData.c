
/* Dictionary`2[System.Object,System.Object] DefaultData(DoorType) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
          (DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
  }
  this = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->static_fields->defaultValues
  ;
  if (this != (Dictionary_2_Assets_Scripts_WorldObjectTypes_MVDoor_DoorType_Dictionary_2_System_Object_System_Object_
               *)0x0) {
    dictionary = (IDictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this,doorType,
                            MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                           );
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_4
              (pDVar1,dictionary,(IEqualityComparer_1_System_Object_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[8].method);
    return pDVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Object DefaultValue(DoorType, String) */

Object * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::
         DoorData_DefaultValue(DoorType__Enum doorType,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Key_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_a_valid_key_for_door_dat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_20 = (Object *)0x0;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
  }
  this = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->static_fields->defaultValues
  ;
  if (this != (Dictionary_2_Assets_Scripts_WorldObjectTypes_MVDoor_DoorType_Dictionary_2_System_Object_System_Object_
               *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this,doorType,
                         MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                        );
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)key,&pOStackX_20,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar1 == 0) {
        message = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_Key_,key,StringLiteral__is_not_a_valid_key_for_door_dat,
                             (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return (Object *)0x0;
      }
      return pOStackX_20;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Vector3 GetCubeModelLocalPosition(DoorType, Transform) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::
          DoorData_GetCubeModelLocalPosition
                    (Vector3 *__return_storage_ptr__,DoorType__Enum doorType,
                    Transform *animationRoot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_doorType___0__has_no_case_for_lo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((doorType != DoorType__Enum_Door) && (doorType != DoorType__Enum_SlidingDoor)) {
    if (doorType != DoorType__Enum_TrapDoor) {
      aDStackX_10[0] = doorType;
      arg0 = (Object *)
             FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,aDStackX_10
                          );
      pSVar1 = StringLiteral_doorType___0__has_no_case_for_lo;
      PStack_2._arg0 = (Object *)0x0;
      PStack_2._arg1 = (Object *)0x0;
      PStack_2._arg2 = (Object *)0x0;
      PStack_2._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
      PStack_3._arg0 = PStack_2._arg0;
      PStack_3._arg1 = PStack_2._arg1;
      PStack_3._arg2 = PStack_2._arg2;
      PStack_3._args = PStack_2._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar5 = (pVVar4->zeroVector).y;
      fVar6 = (pVVar4->zeroVector).z;
      __return_storage_ptr__->x = (pVVar4->zeroVector).x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->x = 3.75;
    __return_storage_ptr__->y = -0.25;
    __return_storage_ptr__->z = 0.25;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->z = 0.1875;
  __return_storage_ptr__->y = 0.0625;
  __return_storage_ptr__->x = 2.0;
  return __return_storage_ptr__;
}


/* Enums+Vector3Axis GetDoorAxis(DoorType) */

Enums_Vector3Axis__Enum
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetDoorAxis
          (DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_doorType___0__has_no_case_for_do);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (doorType != DoorType__Enum_Door) {
    if (doorType != DoorType__Enum_SlidingDoor) {
      if (doorType == DoorType__Enum_TrapDoor) {
        return Enums_Vector3Axis__Enum_Z;
      }
      aDStackX_8[0] = doorType;
      arg0 = (Object *)
             FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,aDStackX_8)
      ;
      pSVar1 = StringLiteral_doorType___0__has_no_case_for_do;
      PStack_2._arg0 = (Object *)0x0;
      PStack_2._arg1 = (Object *)0x0;
      PStack_2._arg2 = (Object *)0x0;
      PStack_2._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
      PStack_3._arg0 = PStack_2._arg0;
      PStack_3._arg1 = PStack_2._arg1;
      PStack_3._arg2 = PStack_2._arg2;
      PStack_3._args = PStack_2._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    return Enums_Vector3Axis__Enum_X;
  }
  return Enums_Vector3Axis__Enum_Y;
}


/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints(DoorType) */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_doorType___0__has_no_case_for_ed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((doorType == DoorType__Enum_Door) || (doorType == DoorType__Enum_SlidingDoor)) {
    (__return_storage_ptr__->Item1).x = -7;
    (__return_storage_ptr__->Item1).y = 0;
    (__return_storage_ptr__->Item2).x = 0x17;
    (__return_storage_ptr__->Item2).y = 0x17;
    (__return_storage_ptr__->Item2).z = 2;
    (__return_storage_ptr__->Item1).z = -3;
  }
  else if (doorType == DoorType__Enum_TrapDoor) {
    (__return_storage_ptr__->Item1).x = -7;
    (__return_storage_ptr__->Item1).y = 0;
    (__return_storage_ptr__->Item2).x = 0x17;
    (__return_storage_ptr__->Item2).y = 5;
    (__return_storage_ptr__->Item2).z = 8;
    (__return_storage_ptr__->Item1).z = -7;
  }
  else {
    aDStackX_10[0] = doorType;
    arg0 = (Object *)
           FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,aDStackX_10);
    pSVar1 = StringLiteral_doorType___0__has_no_case_for_ed;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    (__return_storage_ptr__->Item1).x = 0;
    (__return_storage_ptr__->Item1).y = 0;
    (__return_storage_ptr__->Item2).x = 1;
    (__return_storage_ptr__->Item2).y = 1;
    (__return_storage_ptr__->Item2).z = 1;
    (__return_storage_ptr__->Item1).z = 0;
  }
  return __return_storage_ptr__;
}


/* Boolean IsSliding(DoorType) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_IsSliding
               (DoorType__Enum doorType,MethodInfo *method)

{
  return doorType == DoorType__Enum_SlidingDoor;
}


/* DoorData() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectDocumentationType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trap_Door);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Door);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sliding_Door);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
            );
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)
               TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               Name,(Object *)StringLiteral_Door,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar3 = uStackX_10;
    lVar4 = lRam_?;
    pOVar5 = (Object *)0x0;
    uStackX_10 = uStackX_10 & 0xffffff00;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             BeginOpen;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar7 = pOVar5, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar7 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
    }
    else {
      pOVar7 = (Object *)(CONCAT44(uStackX_14,uVar3) & 0xffffffffffffff00);
    }
    uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10._0_1_ = 1;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             PlayersCanOpen;
    pOVar7 = (Object *)FUN_?(lRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar12 = uStackX_10._1_3_;
    lVar4 = lRam_?;
    uStackX_10 = (uint)uStackX_10._1_3_ << 8;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             ReverseOpenDirection;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar7 = pOVar5, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar7 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
    }
    else {
      pOVar7 = (Object *)((ulonglong)CONCAT43(uStackX_14,uVar12) << 8);
    }
    uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x42b40000;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             OpenValue;
    pOVar7 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             CloseValue;
    pOVar7 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3f000000;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             ToggleTime;
    pOVar7 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar13 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType;
    uStackX_10 = 0;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             DoorType;
    iVar14._0_2_ = (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).byval_arg.
                  attrs;
    iVar14._2_1_ = (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).byval_arg.type
    ;
    iVar14._3_1_ = (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).byval_arg.
                  field_0xb;
    if (iVar14 < 0) {
      if (((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (pOVar7 = pOVar5,
         ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_1).field_0x6d & 8) == 0))
      {
        pOVar7 = (Object *)
                  FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
        FUN_?(pOVar7 + 1,&uStackX_10,(longlong)(int)(pDVar13->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
    }
    else {
      pOVar7 = (Object *)((ulonglong)uStackX_14 << 0x20);
    }
    uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x4b;
    pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             DocType;
    pOVar7 = (Object *)FUN_?(TypeInfo__MVWorldObjectDocumentationType,&uStackX_10);
    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
               (InsertionBehavior__Enum)uVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pDVar1,
                 (InsertionBehavior__Enum)uVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        uVar2 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)
                   TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->Name,(Object *)StringLiteral_Sliding_Door,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar3 = uStackX_10;
        lVar4 = lRam_?;
        uStackX_10 = uStackX_10 & 0xffffff00;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->BeginOpen;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             (pOVar7 = pOVar5, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar7 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
              uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
          }
        }
        else {
          pOVar7 = (Object *)(CONCAT44(uStackX_14,uVar3) & 0xffffffffffffff00);
        }
        uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10._0_1_ = 1;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->PlayersCanOpen;
        pOVar7 = (Object *)FUN_?(lRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar12 = uStackX_10._1_3_;
        lVar4 = lRam_?;
        uStackX_10 = (uint)uStackX_10._1_3_ << 8;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->ReverseOpenDirection;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             (pOVar7 = pOVar5, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar7 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
              uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
          }
        }
        else {
          pOVar7 = (Object *)((ulonglong)CONCAT43(uStackX_14,uVar12) << 8);
        }
        uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0xc0a00000;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->OpenValue;
        pOVar7 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0xbfc00000;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->CloseValue;
        pOVar7 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3e4ccccd;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->ToggleTime;
        pOVar7 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 1;
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->DoorType;
        pOVar7 = (Object *)
                  FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,
                                &uStackX_10);
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->DocType;
        uStackX_10 = 0x4c;
        pOVar7 = (Object *)FUN_?(TypeInfo__MVWorldObjectDocumentationType,&uStackX_10);
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pDVar1,
                   (InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  *)FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)
                     TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                     static_fields->Name,(Object *)StringLiteral_Trap_Door,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uVar3 = uStackX_10;
          lVar4 = lRam_?;
          uStackX_10 = uStackX_10 & 0xffffff00;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->BeginOpen;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               (pOVar7 = pOVar5, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar7 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
                uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
            }
          }
          else {
            pOVar7 = (Object *)(CONCAT44(uStackX_14,uVar3) & 0xffffffffffffff00);
          }
          uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10._0_1_ = 1;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->PlayersCanOpen;
          pOVar7 = (Object *)FUN_?(lRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar7,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uVar12 = uStackX_10._1_3_;
          lVar4 = lRam_?;
          uStackX_10 = (uint)uStackX_10._1_3_ << 8;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->ReverseOpenDirection;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pOVar5 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar5 + 1,&uStackX_10,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
                uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
            }
          }
          else {
            pOVar5 = (Object *)((ulonglong)CONCAT43(uStackX_14,uVar12) << 8);
          }
          uVar11 = CONCAT71((int7)(uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar5,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0xc2b40000;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->OpenValue;
          pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar5,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->CloseValue;
          pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar5,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3e4ccccd;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->ToggleTime;
          pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar5,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 2;
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->DoorType;
          pOVar5 = (Object *)
                    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,
                                  &uStackX_10);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar5,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pSVar6 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->DocType;
          uStackX_10 = 0x4d;
          pOVar5 = (Object *)FUN_?(TypeInfo__MVWorldObjectDocumentationType,&uStackX_10);
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar6,pOVar5,
                     (InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pDVar1,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                     ->klass->rgctx_data[0x22].method);
          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->static_fields->
          defaultValues =
               (Dictionary_2_Assets_Scripts_WorldObjectTypes_MVDoor_DoorType_Dictionary_2_System_Object_System_Object_
                *)this;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)
                            TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->
                            static_fields >> 0xc);
            uVar2 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar2 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

