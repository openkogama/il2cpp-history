
/* Dictionary`2[System.Object,System.Object] DefaultData(DoorType) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
          (DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
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
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              (pDVar1,dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    return pDVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Object DefaultValue(DoorType, String) */

Object * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::
         DoorData_DefaultValue(DoorType__Enum doorType,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&StringLiteral_Key_);
    func_?(&StringLiteral__is_not_a_valid_key_for_door_dat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
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
      value = (Object__Class *)&stack0xfffffff8;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_00,(Object *)key,(Object **)value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar1 == 0) {
        message = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Key_,key,StringLiteral__is_not_a_valid_key_for_door_dat,
                             (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return (Object *)0x0;
      }
      return (Object *)value;
    }
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    func_?(&StringLiteral_doorType___0__has_no_case_for_lo);
    cRam_? = '\x01';
  }
  if ((doorType != DoorType__Enum_Door) && (doorType != DoorType__Enum_SlidingDoor)) {
    if (doorType != DoorType__Enum_TrapDoor) {
      arg0 = (Object *)
             func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,&doorType
                            );
      message = mscorlib.dll::System::String::String_Format
                          (StringLiteral_doorType___0__has_no_case_for_lo,arg0,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        animationRoot = (Transform *)&TypeInfo__UnityEngine__Vector3;
        doorType = (DoorType__Enum)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar1->zeroVector).y;
      fVar3 = (pVVar1->zeroVector).z;
      __return_storage_ptr__->x = (pVVar1->zeroVector).x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    func_?(&StringLiteral_doorType___0__has_no_case_for_do);
    cRam_? = '\x01';
  }
  if (doorType == DoorType__Enum_Door) {
    return Enums_Vector3Axis__Enum_Y;
  }
  if (doorType == DoorType__Enum_SlidingDoor) {
    return Enums_Vector3Axis__Enum_X;
  }
  if (doorType != DoorType__Enum_TrapDoor) {
    arg0 = (Object *)
           func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,&doorType);
    message = mscorlib.dll::System::String::String_Format
                        (StringLiteral_doorType___0__has_no_case_for_do,arg0,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return Enums_Vector3Axis__Enum_X;
  }
  return Enums_Vector3Axis__Enum_Z;
}


/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints(DoorType) */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          DoorType__Enum doorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    func_?(&
                    MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                   );
    func_?(&StringLiteral_doorType___0__has_no_case_for_ed);
    cRam_? = '\x01';
  }
  if ((doorType == DoorType__Enum_Door) || (doorType == DoorType__Enum_SlidingDoor)) {
    puStack_1 = (undefined *)0x0;
    iVar2 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&puStack_1,-7,0,-3,(MethodInfo *)0x0);
    z = 2;
    y = 0x17;
  }
  else {
    if (doorType != DoorType__Enum_TrapDoor) {
      doorType._2_2_ = (undefined2)(doorType >> 0x10);
      arg0 = (Object *)
             func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType,&doorType
                            );
      message = mscorlib.dll::System::String::String_Format
                          (StringLiteral_doorType___0__has_no_case_for_ed,arg0,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffec,0,0,0,(MethodInfo *)0x0);
      iVar2 = 0;
      uVar3._0_2_ = 1;
      uVar3._2_2_ = 0;
      puStack_1 = (undefined *)0x0;
      iVar4 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&puStack_1,1,1,1,(MethodInfo *)0x0);
      (__return_storage_ptr__->Item1).x = 0;
      (__return_storage_ptr__->Item1).y = 0;
      (__return_storage_ptr__->Item1).z = 0;
      (__return_storage_ptr__->Item2).x = 0;
      (__return_storage_ptr__->Item2).y = 0;
      (__return_storage_ptr__->Item2).z = 0;
      method = (MethodInfo *)__return_storage_ptr__;
      doorType._0_2_ = 0x3727;
      doorType._2_2_ = 0x104e;
      item1.z = iVar2;
      item1.x = (int16_t)uVar3;
      item1.y = SUB42(uVar3,2);
      item2_00.z = iVar4;
      item2_00._0_4_ = puStack_1;
      mscorlib.dll::System::ValueTuple`2[MV::WorldObject::IntVector,MV::WorldObject::IntVector]::
      ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector___ctor
                (__return_storage_ptr__,item1,item2_00,
                 MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                );
      return __return_storage_ptr__;
    }
    puStack_1 = (undefined *)0x0;
    iVar2 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&puStack_1,-7,0,-7,(MethodInfo *)0x0);
    z = 8;
    y = 5;
  }
  uVar5._0_2_ = 0;
  uVar5._2_2_ = 0;
  uVar6 = DoorType__Enum_Door;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xffffffec,0x17,y,z,(MethodInfo *)0x0);
  puVar7 = puStack_1;
  (__return_storage_ptr__->Item1).x = 0;
  (__return_storage_ptr__->Item1).y = 0;
  (__return_storage_ptr__->Item1).z = 0;
  (__return_storage_ptr__->Item2).x = 0;
  (__return_storage_ptr__->Item2).y = 0;
  (__return_storage_ptr__->Item2).z = 0;
  method = 
  MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
  ;
  item1_00.z = iVar2;
  item1_00._0_4_ = puVar7;
  item2.z = uVar6;
  item2.x = (int16_t)uVar5;
  item2.y = SUB42(uVar5,2);
  doorType._0_2_ = uVar6;
  mscorlib.dll::System::ValueTuple`2[MV::WorldObject::IntVector,MV::WorldObject::IntVector]::
  ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector___ctor
            (__return_storage_ptr__,item1_00,item2,
             MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
            );
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__MVWorldObjectDocumentationType);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Trap_Door);
    func_?(&StringLiteral_Door);
    func_?(&StringLiteral_Sliding_Door);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
            );
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)
               TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               Name,(Object *)StringLiteral_Door,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             BeginOpen;
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             PlayersCanOpen;
    pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             ReverseOpenDirection;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             OpenValue;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             CloseValue;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             ToggleTime;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             DoorType;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
             DocType;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                );
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)
                   TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->Name,(Object *)StringLiteral_Sliding_Door,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->BeginOpen;
        pOVar3 = (Object *)func_?(TypeInfo__System__Boolean);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->PlayersCanOpen;
        pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffff7);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->ReverseOpenDirection;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->OpenValue;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->CloseValue;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->ToggleTime;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->DoorType;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->DocType;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)
                     TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                     static_fields->Name,(Object *)StringLiteral_Trap_Door,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->BeginOpen;
          pOVar3 = (Object *)func_?(TypeInfo__System__Boolean);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->PlayersCanOpen;
          pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffff4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->ReverseOpenDirection;
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->OpenValue;
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->CloseValue;
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->ToggleTime;
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->DoorType;
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->DocType;
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar2,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pDVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_Assets__Scripts__WorldObjectTypes__MVDoor__DoorType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                    );
          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->static_fields->
          defaultValues =
               (Dictionary_2_Assets_Scripts_WorldObjectTypes_MVDoor_DoorType_Dictionary_2_System_Object_System_Object_
                *)this;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

