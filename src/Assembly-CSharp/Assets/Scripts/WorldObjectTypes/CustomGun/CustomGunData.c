
/* Color DefaultColor(String) */

Color * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
        CustomGunData_DefaultColor
                  (Color *__return_storage_ptr__,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              defaultItemValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  CStack_1.r = 0.0;
  CStack_1.g = 0.0;
  CStack_1.b = 0.0;
  CStack_1.a = 0.0;
  pCVar2 = Extensions::Extensions_GetColorOrDefault
                     (aCStack_3,hashtable,colorKey,&CStack_1,(MethodInfo *)0x0);
  fVar4 = pCVar2->g;
  fVar5 = pCVar2->b;
  fVar6 = pCVar2->a;
  __return_storage_ptr__->r = pCVar2->r;
  __return_storage_ptr__->g = fVar4;
  __return_storage_ptr__->b = fVar5;
  __return_storage_ptr__->a = fVar6;
  return __return_storage_ptr__;
}


/* Dictionary`2[System.Object,System.Object] DefaultData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_DefaultData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
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
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pDVar1 = CustomGunData_DefaultItemData((MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_itemData,
               (Object *)pDVar1,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_10[0] = 0xf;
    value = (Object *)FUN_?(TypeInfo__MV__Common__AvatarItemType,auStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_itemType,
               value,CONCAT31((int3)(behavior >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Dictionary`2[System.Object,System.Object] DefaultItemData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_DefaultItemData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  dictionary = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
               ->defaultItemValues;
  this = (Dictionary_2_System_Object_System_Object_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object___ctor_4
            (this,(IDictionary_2_System_Object_System_Object_ *)dictionary,
             (IEqualityComparer_1_System_Object_ *)0x0,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
             ->klass->rgctx_data[8].method);
  return this;
}


/* Object DefaultValue(String) */

Object * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
         CustomGunData_DefaultValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pMVar1 = 
  System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
  ;
  pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           defaultItemValues;
  if ((
      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
                 );
  }
  pMVar1 = (pMVar1->field7_0x38).rgctx_data[3].method;
  if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(pMVar1);
  }
  uVar3 = 0;
  if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar4);
    paramName = (String *)func_?(&StringLiteral_dictionary);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    FUN_?(this,pMVar1);
    pcVar5 = (code *)swi(3);
    pOVar6 = (Object *)(*pcVar5)();
    return pOVar6;
  }
  pIVar7 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((pIVar7->field_0x135 & 1) == 0) {
    pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
  }
  pDVar8 = pDVar2->klass;
  uVar9._0_1_ = (pDVar8->_1).rank;
  uVar9._1_1_ = (pDVar8->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pDVar8->interfaceOffsets[uVar3].interfaceType == pIVar7) {
        pVVar10 = &(pDVar8->vtable).Equals + (pDVar8->interfaceOffsets[uVar3].offset + 1);
        goto code_?;
      }
      uVar11 = (short)uVar3 + 1;
      uVar3 = (ulonglong)uVar11;
    } while (uVar11 < uVar9);
  }
  pVVar10 = (VirtualInvokeData *)FUN_?(pDVar2,pIVar7,1);
code_?:
  (*pVVar10->methodPtr)(pDVar2,key,&stack0x00000008,pVVar10->method);
  return (Object *)0x0;
}


/* Vector3 DefaultVector3(String) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
          CustomGunData_DefaultVector3
                    (Vector3 *__return_storage_ptr__,String *vectorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              defaultItemValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.z = 0.0;
  pVVar2 = Extensions::Extensions_GetVector3OrDefault
                     (&VStack_3,hashtable,vectorKey,&VStack_1,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints() */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->Item1).x = -9;
  (__return_storage_ptr__->Item1).y = -5;
  (__return_storage_ptr__->Item2).x = 8;
  (__return_storage_ptr__->Item2).y = 0xb;
  (__return_storage_ptr__->Item2).z = 0x1e;
  (__return_storage_ptr__->Item1).z = -10;
  return __return_storage_ptr__;
}


/* Single MaxValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
      CustomGunData_MaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
         maxValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = 
  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
  ;
  fVar2 = _UNK_?;
  if ((
      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar1);
    }
  }
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    return fVar2;
  }
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar5 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
    pvVar5 = (void *)FUN_?(pvVar5);
  }
  lVar6 = FUN_?(pOVar4,pvVar5);
  if (lVar6 == 0) {
    pvVar5 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar5 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar6 = FUN_?(pvVar5,1);
    plVar7 = (longlong *)FUN_?(lVar6 + 0x20);
    if (plVar7 == (longlong *)0x0) goto code_?;
    cVar8 = (**(code **)(*plVar7 + 0x588))(plVar7,*(undefined8 *)(*plVar7 + 0x590));
    if (cVar8 == '\0') {
      return fVar2;
    }
    if (pOVar4 == (Object *)0x0) {
      return fVar2;
    }
    pOVar9 = (Object *)0x0;
    if (pOVar4->klass == pORam0000000182dc5078) {
      pOVar9 = pOVar4;
    }
    if (pOVar9 == (Object *)0x0) {
      return fVar2;
    }
  }
  lVar6 = *(longlong *)(pMVar1->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_?(lVar6);
  }
  if (pOVar4 != (Object *)0x0) {
    if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lVar6 + 0x40)) {
      return *(float *)&pOVar4[1].klass;
    }
    FUN_?(pOVar4,lVar6);
    pcVar10 = (code *)swi(3);
    fVar2 = (float)(*pcVar10)();
    return fVar2;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  fVar2 = (float)(*pcVar10)();
  return fVar2;
}


/* ValueTuple`2[Single,Single] MinMaxValue(String) */

ValueTuple_2_Single_Single_
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_MinMaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           minValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar2 = Extensions::Extensions_GetValueOrDefault_4
                    (pDVar1,key,0.0,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           maxValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar3 = Extensions::Extensions_GetValueOrDefault_4
                    (pDVar1,key,_UNK_?,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  VVar4.Item2 = fVar3;
  VVar4.Item1 = fVar2;
  return VVar4;
}


/* Single MinValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
      CustomGunData_MinValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
         minValues;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = 
  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
  ;
  if ((
      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar1);
    }
  }
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar2 < 0) {
    return 0.0;
  }
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar4 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  lVar5 = FUN_?(pOVar3,pvVar4);
  if (lVar5 == 0) {
    pvVar4 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar4 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar5 = FUN_?(pvVar4,1);
    plVar6 = (longlong *)FUN_?(lVar5 + 0x20);
    if (plVar6 == (longlong *)0x0) goto code_?;
    cVar7 = (**(code **)(*plVar6 + 0x588))(plVar6,*(undefined8 *)(*plVar6 + 0x590));
    if ((cVar7 == '\0') || (pOVar3 == (Object *)0x0)) {
      return 0.0;
    }
    pOVar8 = (Object *)0x0;
    if (pOVar3->klass == pORam0000000182dc5078) {
      pOVar8 = pOVar3;
    }
    if (pOVar8 == (Object *)0x0) {
      return 0.0;
    }
  }
  lVar5 = *(longlong *)(pMVar1->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_?(lVar5);
  }
  if (pOVar3 != (Object *)0x0) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lVar5 + 0x40)) {
      FUN_?(pOVar3,lVar5);
      pcVar9 = (code *)swi(3);
      fVar10 = (float)(*pcVar9)();
      return fVar10;
    }
    return *(float *)&pOVar3[1].klass;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float)(*pcVar9)();
  return fVar10;
}


/* CustomGunData() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
     CustomGunData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
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
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&_0EAB6EC6C45C3A2EC1742291A27C6FB6908AFF29C125F56BF5965A533C912B69_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_29E8A442F33CAD2057FDF54C9813CABDA2DE1FD86ED9E64B53C4DE75741A912C_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_96B0D9B648215260DFA72CA32240379ACDCD3D78B11C81DB373C18C4338E0CE5_Field);
    LOCK();
    UNLOCK();
    FUN_?(&A480DB650E94CE07AD8E7C752477FE0541ED8CB69D8D8FD0A6A0AFEF4F1F4B01_Field);
    LOCK();
    UNLOCK();
    FUN_?(&AB3776AA1ACE09050C5F3A211263CAB0D47E5204C66736DEBED306D523698D19_Field);
    LOCK();
    UNLOCK();
    FUN_?(&E2D30C16FEB57BB0C779D0E4B61C96D66CE9C5E7A066B1A39A2574D4FD13B2D0_Field);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_heavy_machine_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_plasma_cannon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pistol);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_none);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_flamethrower);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileTrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_slash);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_heavy_thud);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_mini_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_electric);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spell_wave);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spell_flare);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_heavy_revolver);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_small_pistol);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sci_fi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spell_burst);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_laser);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_boiling);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_microwave);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spell_rocket);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_burst_blaster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_burst);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_silenced_smg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cannon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_automatic_rifle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ricochet);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectilesPerShot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SmokeOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rail_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_silenced_pistol);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_machine_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeedWhileHeld);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bullet);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bazooka);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_musket);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_arrow);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_railgun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_potato_cannon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spinning);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_smg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_semi_auto);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_oculus);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_light_bullet);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_screwdriver);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_light_smg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bonk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomAmmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ThirdPersonCamera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_heavy_automatic_rifle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksOnHit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_heavy_smg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_punch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_laser_gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shotgun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_blaster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BurstCooldownBetweenShots);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sniper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_heavy_blaster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_full_auto);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_magical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_minigun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_wind_up_toy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_slap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxAmmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_engine);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_metal_clash);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_small_smg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_revolver);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_woosh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShotsPerBurst);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_air_cannon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_explosion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Name,
               (Object *)StringLiteral_Gun,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x41a00000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_MaxAmmo,
               pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x41700000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Damage,
               pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x43fa0000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_ImpulseStrength,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x43160000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_RecoilStrength,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3e4ccccd;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_AttackAnimationTime,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3e99999a;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_AttackCooldown,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Radius,
               pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 1;
    pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_FireSoundEffect,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3f800000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_FireSoundEffectVolume,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 1;
    pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_HitSoundEffect,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x3f800000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_HitSoundEffectVolume,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0x41000000;
    pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_MovementSpeedWhileHeld,pOVar3,(InsertionBehavior__Enum)uVar4
               ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method);
    lVar5 = lRam_?;
    pOVar3 = (Object *)0x0;
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar6 = pOVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar6 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar7 & 0x3f);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
    }
    else {
      pOVar6 = (Object *)((ulonglong)uStackX_14 << 0x20);
    }
    uVar2 = CONCAT71((int7)(uVar4 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_FireMode,
               pOVar6,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,3);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar12,__96B0D9B648215260DFA72CA32240379ACDCD3D78B11C81DB373C18C4338E0CE5_Field,
               (MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_MuzzlePosition,(Object *)pAVar12,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar6 = (Object *)FUN_?(TypeInfo__System__Single,3);
    if (pOVar6 != (Object *)0x0) {
      if (*(uint *)&pOVar6[1].monitor < 3) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *(undefined4 *)&pOVar6[2].monitor = 0x3f800000;
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleDirection,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
      pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleFlareOnFire,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x41200000;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleFlareSize,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar12,__0EAB6EC6C45C3A2EC1742291A27C6FB6908AFF29C125F56BF5965A533C912B69_Field,
                 (MethodInfo *)0x0);
      uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleFlareColor,(Object *)pAVar12,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar7 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar7 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
      }
      uVar2 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ThirdPersonCamera,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
      pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SmokeOnFire,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x40400000;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ShotsPerBurst,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3e4ccccd;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_BurstCooldownBetweenShots,pOVar6,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3f800000;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectilesPerShot,pOVar6,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar7 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar7 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar3 = (Object *)(CONCAT44(uStackX_14,uVar7) & 0xffffffffffffff00);
      }
      uVar2 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeEnabled,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3f800000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeTime,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 1;
      pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeSoundEffect,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3f800000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeSoundEffectVolume,pOVar3,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
      pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeParticlesEnabled,pOVar3,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x41200000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeParticlesSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar12,_A480DB650E94CE07AD8E7C752477FE0541ED8CB69D8D8FD0A6A0AFEF4F1F4B01_Field,
                 (MethodInfo *)0x0);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeParticlesColor,(Object *)pAVar12,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
      pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeZoomEnabled,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x41f00000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeZoomAmmount,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3f800000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeZoomTime,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x42c80000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Range,
                 pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x42a00000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileSpeed,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3e2e147b;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar12,__29E8A442F33CAD2057FDF54C9813CABDA2DE1FD86ED9E64B53C4DE75741A912C_Field,
                 (MethodInfo *)0x0);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileColor,(Object *)pAVar12,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar12,_E2D30C16FEB57BB0C779D0E4B61C96D66CE9C5E7A066B1A39A2574D4FD13B2D0_Field,
                 (MethodInfo *)0x0);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileTrailColor,(Object *)pAVar12,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
      pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SparksOnHit,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3f800000;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SparksSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pAVar12 = (Array *)FUN_?(TypeInfo__System__Single,4);
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar12,_AB3776AA1ACE09050C5F3A211263CAB0D47E5204C66736DEBED306D523698D19_Field,
                 (MethodInfo *)0x0);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SparksColor,(Object *)pAVar12,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
      defaultItemValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)
                        TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                        static_fields >> 0xc);
        uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar8 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
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
      uStackX_10 = 0;
      pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_MaxAmmo,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_Damage,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ImpulseStrength,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_RecoilStrength,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3c23d70a;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_AttackAnimationTime,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3c23d70a;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_AttackCooldown,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_Radius,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_FireSoundEffectVolume,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_HitSoundEffectVolume,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3f800000;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_MovementSpeedWhileHeld,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3dcccccd;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_MuzzleFlareSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x40000000;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ShotsPerBurst,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3cf5c28f;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_BurstCooldownBetweenShots,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3f800000;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ProjectilesPerShot,pOVar3,(InsertionBehavior__Enum)uVar2
                   ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3c23d70a;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeTime,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeSoundEffectVolume,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeParticlesSize,pOVar3,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeZoomAmmount,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3c23d70a;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeZoomTime,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3f800000;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Range
                   ,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3f800000;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ProjectileSpeed,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0x3d4ccccd;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ProjectileSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uStackX_10 = 0;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_SparksSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
        minValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
        func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                             static_fields->minValues);
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
        uStackX_10 = 0x4479c000;
        pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_MaxAmmo,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x42c80000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_Damage,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x4479c000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ImpulseStrength,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x43c80000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_RecoilStrength,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x40000000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_AttackAnimationTime,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x40a00000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_AttackCooldown,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f000000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_Radius,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f800000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_FireSoundEffectVolume,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f800000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_HitSoundEffectVolume,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x41800000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_MovementSpeedWhileHeld,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x41a00000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_MuzzleFlareSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x41a00000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ShotsPerBurst,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f800000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_BurstCooldownBetweenShots,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x41200000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ProjectilesPerShot,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x41a00000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeTime,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f800000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeSoundEffectVolume,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x41a00000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeParticlesSize,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x426c0000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeZoomAmmount,pOVar3,
                     (InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x40a00000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeZoomTime,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x44480000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_Range,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x43fa0000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ProjectileSpeed,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x3f800000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ProjectileSize,pOVar3,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          uStackX_10 = 0x40000000;
          pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_SparksSize,pOVar3,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
          maxValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
          func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                               ->static_fields->maxValues);
          pSVar14 = (String__Array *)FUN_?(TypeInfo__System__String);
          pSVar15 = TM::TM__(StringLiteral_semi_auto,(MethodInfo *)0x0);
          if (pSVar14 != (String__Array *)0x0) {
            FUN_?(pSVar14,0,pSVar15);
            pSVar15 = TM::TM__(StringLiteral_full_auto,(MethodInfo *)0x0);
            FUN_?(pSVar14,1,pSVar15);
            pSVar15 = TM::TM__(StringLiteral_burst,(MethodInfo *)0x0);
            FUN_?(pSVar14,2,pSVar15);
            TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
            fireModes = pSVar14;
            func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                 ->static_fields->fireModes);
            pSVar14 = (String__Array *)FUN_?(TypeInfo__System__String);
            pSVar15 = TM::TM__(StringLiteral_none,(MethodInfo *)0x0);
            if (pSVar14 != (String__Array *)0x0) {
              FUN_?(pSVar14,0,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_pistol,(MethodInfo *)0x0);
              FUN_?(pSVar14,1,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_small_pistol,(MethodInfo *)0x0);
              FUN_?(pSVar14,2,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_silenced_pistol,(MethodInfo *)0x0);
              FUN_?(pSVar14,3,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_revolver,(MethodInfo *)0x0);
              FUN_?(pSVar14,4,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_heavy_revolver,(MethodInfo *)0x0);
              FUN_?(pSVar14,5,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_automatic_rifle,(MethodInfo *)0x0);
              FUN_?(pSVar14,6,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_heavy_automatic_rifle,(MethodInfo *)0x0);
              FUN_?(pSVar14,7,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_machine_gun,(MethodInfo *)0x0);
              FUN_?(pSVar14,8,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_heavy_machine_gun,(MethodInfo *)0x0);
              FUN_?(pSVar14,9,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_minigun,(MethodInfo *)0x0);
              FUN_?(pSVar14,10,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_smg,(MethodInfo *)0x0);
              FUN_?(pSVar14,0xb,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_heavy_smg,(MethodInfo *)0x0);
              FUN_?(pSVar14,0xc,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_light_smg,(MethodInfo *)0x0);
              FUN_?(pSVar14,0xd,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_small_smg,(MethodInfo *)0x0);
              FUN_?(pSVar14,0xe,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_silenced_smg,(MethodInfo *)0x0);
              FUN_?(pSVar14,0xf,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_bazooka,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x10,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_shotgun,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x11,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_rail_gun,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x12,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_flamethrower,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x13,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_sniper,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x14,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_laser_gun,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x15,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_blaster,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x16,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_burst_blaster,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x17,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_heavy_blaster,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x18,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_plasma_cannon,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x19,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_musket,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x1a,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_cannon,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x1b,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_air_cannon,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x1c,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_potato_cannon,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x1d,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_spell_wave,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x1e,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_spell_flare,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x1f,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_spell_burst,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x20,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_spell_rocket,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x21,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_woosh,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x22,pSVar15);
              pSVar15 = TM::TM__(StringLiteral_spinning,(MethodInfo *)0x0);
              FUN_?(pSVar14,0x23,pSVar15);
              bVar11 = iRam_? != 0;
              TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              fireSoundEffects = pSVar14;
              if (bVar11) {
                uVar7 = (uint)((ulonglong)
                                &TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                 ->static_fields->fireSoundEffects >> 0xc);
                uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar11 = uVar8 == *puVar10;
                  if (bVar11) {
                    *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar11);
              }
              pSVar14 = (String__Array *)FUN_?(TypeInfo__System__String);
              pSVar15 = TM::TM__(StringLiteral_none,(MethodInfo *)0x0);
              if (pSVar14 != (String__Array *)0x0) {
                FUN_?(pSVar14,0,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_bullet,(MethodInfo *)0x0);
                FUN_?(pSVar14,1,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_light_bullet,(MethodInfo *)0x0);
                FUN_?(pSVar14,2,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_ricochet,(MethodInfo *)0x0);
                FUN_?(pSVar14,3,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_metal_clash,(MethodInfo *)0x0);
                FUN_?(pSVar14,4,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_arrow,(MethodInfo *)0x0);
                FUN_?(pSVar14,5,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_slap,(MethodInfo *)0x0);
                FUN_?(pSVar14,6,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_bonk,(MethodInfo *)0x0);
                FUN_?(pSVar14,7,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_punch,(MethodInfo *)0x0);
                FUN_?(pSVar14,8,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_heavy_thud,(MethodInfo *)0x0);
                FUN_?(pSVar14,9,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_explosion,(MethodInfo *)0x0);
                FUN_?(pSVar14,10,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_pop,(MethodInfo *)0x0);
                FUN_?(pSVar14,0xb,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_laser,(MethodInfo *)0x0);
                FUN_?(pSVar14,0xc,pSVar15);
                pSVar15 = TM::TM__(StringLiteral_slash,(MethodInfo *)0x0);
                FUN_?(pSVar14,0xd,pSVar15);
                bVar11 = iRam_? != 0;
                TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
                ->hitSoundEffects = pSVar14;
                if (bVar11) {
                  uVar7 = (uint)((ulonglong)
                                  &TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                   ->static_fields->hitSoundEffects >> 0xc);
                  uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                  do {
                    uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar11 = uVar8 == *puVar10;
                    if (bVar11) {
                      *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar11);
                }
                pSVar14 = (String__Array *)FUN_?(TypeInfo__System__String);
                pSVar15 = TM::TM__(StringLiteral_none,(MethodInfo *)0x0);
                if (pSVar14 != (String__Array *)0x0) {
                  FUN_?(pSVar14,0,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_mini_gun,(MethodInfo *)0x0);
                  FUN_?(pSVar14,1,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_electric,(MethodInfo *)0x0);
                  FUN_?(pSVar14,2,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_railgun,(MethodInfo *)0x0);
                  FUN_?(pSVar14,3,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_engine,(MethodInfo *)0x0);
                  FUN_?(pSVar14,4,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_wind_up_toy,(MethodInfo *)0x0);
                  FUN_?(pSVar14,5,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_oculus,(MethodInfo *)0x0);
                  FUN_?(pSVar14,6,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_boiling,(MethodInfo *)0x0);
                  FUN_?(pSVar14,7,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_sci_fi,(MethodInfo *)0x0);
                  FUN_?(pSVar14,8,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_magical,(MethodInfo *)0x0);
                  FUN_?(pSVar14,9,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_microwave,(MethodInfo *)0x0);
                  FUN_?(pSVar14,10,pSVar15);
                  pSVar15 = TM::TM__(StringLiteral_screwdriver,(MethodInfo *)0x0);
                  FUN_?(pSVar14,0xb,pSVar15);
                  bVar11 = iRam_? != 0;
                  TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                  static_fields->chargeSoundEffects = pSVar14;
                  if (bVar11) {
                    uVar7 = (uint)((ulonglong)
                                    &TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                     ->static_fields->chargeSoundEffects >> 0xc);
                    uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                    do {
                      uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar11 = uVar8 == *puVar10;
                      if (bVar11) {
                        *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar11);
                  }
                  return;
                }
              }
            }
          }
        }
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

