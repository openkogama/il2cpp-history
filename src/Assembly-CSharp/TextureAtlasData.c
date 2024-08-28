
/* Int32 AtlasColumns(Int32) */

int32_t Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_AtlasColumns
                  (int32_t atlasWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlasData);
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    cRam_? = '\x01';
  }
  VStack_1.Item1 = 0;
  VStack_1.Item2 = (void *)0x0;
  item1 = (int)(atlasWidth + (atlasWidth >> 0x1f & 0xfU)) >> 4;
  mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
            (&VStack_1,item1,(void *)(int)((float)item1 * _UNK_?),
             MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
  return atlasWidth / (VStack_1.Item1 + (int)VStack_1.Item2 * 2);
}


/* Color GetMaterialColorData(Int32) */

Color * Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_GetMaterialColorData
                  (Color *__return_storage_ptr__,int32_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
  if (this != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this,materialID,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if (pOVar1 != (Object *)0x0) {
      pMVar2 = pOVar1[1].monitor;
      pOVar3 = pOVar1[2].klass;
      pMVar4 = pOVar1[2].monitor;
      __return_storage_ptr__->r = (float)pOVar1[1].klass;
      __return_storage_ptr__->g = (float)pMVar2;
      __return_storage_ptr__->b = (float)pOVar3;
      __return_storage_ptr__->a = (float)pMVar4;
      return __return_storage_ptr__;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* Vector4[] GetTileAnimationArray() */

Vector4__Array *
Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_GetTileAnimationArray(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                   );
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&TypeInfo__UnityEngine__Vector4);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector4__Array *)func_?(TypeInfo__UnityEngine__Vector4,0x45);
  key = 0;
  pVVar2 = pVVar1;
  while( true ) {
    if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlasData);
    }
    this = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (this == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this,key,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if ((pOVar3 == (Object *)0x0) || (pVVar1 == (Vector4__Array *)0x0)) break;
    pMVar4 = pOVar3[5].monitor;
    pOVar5 = pOVar3[6].klass;
    pMVar6 = pOVar3[6].monitor;
    if (pVVar1->max_length <= key) goto code_?;
    pVVar2->vector[0].x = (float)pOVar3[5].klass;
    pVVar2->vector[0].y = (float)pMVar4;
    pVVar2->vector[0].z = (float)pOVar5;
    pVVar2->vector[0].w = (float)pMVar6;
    key = key + 1;
    pVVar2 = (Vector4__Array *)pVVar2->vector;
    if (0x44 < (int)key) {
      return pVVar1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar2 = (Vector4__Array *)(*pcVar7)();
  return pVVar2;
}


/* Vector4[] GetTileEmissionArray() */

Vector4__Array *
Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_GetTileEmissionArray(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                   );
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&TypeInfo__UnityEngine__Vector4);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector4__Array *)func_?(TypeInfo__UnityEngine__Vector4,0x45);
  key = 0;
  pVVar2 = pVVar1;
  while( true ) {
    if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlasData);
    }
    this = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (this == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this,key,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if ((pOVar3 == (Object *)0x0) || (pVVar1 == (Vector4__Array *)0x0)) break;
    pMVar4 = pOVar3[3].monitor;
    pOVar5 = pOVar3[4].klass;
    pMVar6 = pOVar3[4].monitor;
    if (pVVar1->max_length <= key) goto code_?;
    pVVar2->vector[0].x = (float)pOVar3[3].klass;
    pVVar2->vector[0].y = (float)pMVar4;
    pVVar2->vector[0].z = (float)pOVar5;
    pVVar2->vector[0].w = (float)pMVar6;
    key = key + 1;
    pVVar2 = (Vector4__Array *)pVVar2->vector;
    if (0x44 < (int)key) {
      return pVVar1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar2 = (Vector4__Array *)(*pcVar7)();
  return pVVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Add_Tile__TextureAtlasData__MaterialData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Dictionary_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>
                   );
    func_?(&TypeInfo__TextureAtlasData__MaterialData);
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
  }
  pMVar1 = (MethodInfo *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>
                           );
  method_00 = pMVar1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object___ctor_3
            ((Dictionary_2_System_Int32Enum_System_Object_ *)pMVar1,0x45,
             MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Dictionary_int_
            );
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlasData);
  }
  TypeInfo__TextureAtlasData->static_fields->materialDataDictionary =
       (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)pMVar1;
  func_?(&TypeInfo__TextureAtlasData->static_fields->materialDataDictionary,pMVar1);
  pMVar1 = (MethodInfo *)0x0;
  while( true ) {
    if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlasData);
    }
    this = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector4);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector4->static_fields;
    pOVar3 = (Object__Class *)(pVVar2->zeroVector).x;
    pMVar4 = (MonitorData *)(pVVar2->zeroVector).y;
    pOVar5 = (Object__Class *)(pVVar2->zeroVector).z;
    pMVar6 = (MonitorData *)(pVVar2->zeroVector).w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector4);
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector4->static_fields;
    pOVar7 = (Object__Class *)(pVVar2->zeroVector).x;
    pMVar8 = (MonitorData *)(pVVar2->zeroVector).y;
    pOVar9 = (Object__Class *)(pVVar2->zeroVector).z;
    pMVar10 = (MonitorData *)(pVVar2->zeroVector).w;
    value = (Object *)func_?(TypeInfo__TextureAtlasData__MaterialData);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,method_00);
    value[1].klass = (Object__Class *)(float)(int)pMVar1;
    value[1].monitor = (MonitorData *)0x0;
    value[2].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)0x0;
    value[3].klass = pOVar3;
    value[3].monitor = pMVar4;
    value[4].klass = pOVar5;
    value[4].monitor = pMVar6;
    value[5].klass = pOVar7;
    value[5].monitor = pMVar8;
    value[6].klass = pOVar9;
    value[6].monitor = pMVar10;
    if (this == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) break;
    method_00 = pMVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,(Int32Enum__Enum)pMVar1,value,
               MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Add_Tile__TextureAtlasData__MaterialData_
              );
    pMVar1 = (MethodInfo *)((int)&pMVar1->methodPointer + 1);
    if (0x44 < (int)pMVar1) {
      if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TextureAtlasData);
      }
      TextureAtlasData_InitializeEmissiveData((MethodInfo *)0x0);
      TextureAtlasData_InitializeAnimationData((MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeAnimationData() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_InitializeAnimationData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x3f,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if (pOVar2 != (Object *)0x0) {
      pOVar2[5].klass = (Object__Class *)0x3f800000;
      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x43,
                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                           );
        if (pOVar2 != (Object *)0x0) {
          pOVar2[5].klass = (Object__Class *)0x3f800000;
          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
          if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1b,
                                MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                               );
            if (pOVar2 != (Object *)0x0) {
              pOVar2[6].klass = (Object__Class *)0x3f800000;
              pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
              if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x36,
                                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                   );
                if (pOVar2 != (Object *)0x0) {
                  pOVar2[6].klass = (Object__Class *)0x3f800000;
                  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1a,
                                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                       );
                    if (pOVar2 != (Object *)0x0) {
                      pOVar2[6].monitor = (MonitorData *)0x3d4ccccd;
                      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                      if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                            0x33,
                                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                           );
                        if (pOVar2 != (Object *)0x0) {
                          pOVar2[6].monitor = (MonitorData *)0x3dcccccd;
                          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary
                          ;
                          if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32Enum,System::Object]::
                                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                                               ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                pDVar1,0x1c,
                                                MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                               );
                            if (pOVar2 != (Object *)0x0) {
                              pOVar2[6].monitor = (MonitorData *)0x3f800000;
                              pDVar1 = TypeInfo__TextureAtlasData->static_fields->
                                       materialDataDictionary;
                              if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0)
                              {
                                pOVar2 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Int32Enum,System::Object]::
                                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                    pDVar1,0x40,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                if (pOVar2 != (Object *)0x0) {
                                  pOVar2[6].monitor = (MonitorData *)0x3f800000;
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeEmissiveData() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_InitializeEmissiveData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1a,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if (pOVar2 != (Object *)0x0) {
      pOVar2[3].klass = (Object__Class *)0x3f400000;
      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1c,
                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                           );
        if (pOVar2 != (Object *)0x0) {
          pOVar2[3].klass = (Object__Class *)0x3f333333;
          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
          if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x40,
                                MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                               );
            if (pOVar2 != (Object *)0x0) {
              pOVar2[3].klass = (Object__Class *)0x3ecccccd;
              pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
              if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2d,
                                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                   );
                if (pOVar2 != (Object *)0x0) {
                  pOVar2[3].klass = (Object__Class *)0x3f800000;
                  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2e,
                                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                       );
                    if (pOVar2 != (Object *)0x0) {
                      pOVar2[3].klass = (Object__Class *)0x3f800000;
                      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                      if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                            0x37,
                                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                           );
                        if (pOVar2 != (Object *)0x0) {
                          pOVar2[3].klass = (Object__Class *)0x3f666666;
                          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary
                          ;
                          if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32Enum,System::Object]::
                                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                                               ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                pDVar1,0x2f,
                                                MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                               );
                            if (pOVar2 != (Object *)0x0) {
                              pOVar2[3].klass = (Object__Class *)0x3f000000;
                              pDVar1 = TypeInfo__TextureAtlasData->static_fields->
                                       materialDataDictionary;
                              if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0)
                              {
                                pOVar2 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Int32Enum,System::Object]::
                                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                    pDVar1,0x1a,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                if (pOVar2 != (Object *)0x0) {
                                  pOVar2[3].monitor = (MonitorData *)0x3f800000;
                                  pDVar1 = TypeInfo__TextureAtlasData->static_fields->
                                           materialDataDictionary;
                                  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)
                                                0x0) {
                                    pOVar2 = mscorlib.dll::System::Collections::Generic::
                                             Dictionary`2[System::Int32Enum,System::Object]::
                                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                       ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x2f,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                    if (pOVar2 != (Object *)0x0) {
                                      pOVar2[3].monitor = (MonitorData *)0x3f400000;
                                      pDVar1 = TypeInfo__TextureAtlasData->static_fields->
                                               materialDataDictionary;
                                      if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                        pOVar2 = mscorlib.dll::System::Collections::Generic::
                                                 Dictionary`2[System::Int32Enum,System::Object]::
                                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                           ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1a,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                        if (pOVar2 != (Object *)0x0) {
                                          pOVar2[4].klass = (Object__Class *)0x3ecccccd;
                                          pDVar1 = TypeInfo__TextureAtlasData->static_fields->
                                                   materialDataDictionary;
                                          if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                            pOVar2 = mscorlib.dll::System::Collections::Generic::
                                                     Dictionary`2[System::Int32Enum,System::Object]
                                                     ::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1c,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                            if (pOVar2 != (Object *)0x0) {
                                              pOVar2[4].klass = (Object__Class *)0x3e4ccccd;
                                              pDVar1 = TypeInfo__TextureAtlasData->static_fields->
                                                       materialDataDictionary;
                                              if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                pOVar2 = mscorlib.dll::System::Collections::Generic
                                                         ::Dictionary`2[System::Int32Enum,System::
                                                         Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x40,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                if (pOVar2 != (Object *)0x0) {
                                                  pOVar2[4].klass = (Object__Class *)0x3e4ccccd;
                                                  pDVar1 = TypeInfo__TextureAtlasData->static_fields
                                                           ->materialDataDictionary;
                                                  if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x41,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].klass = (Object__Class *)0x3f000000;
                                                    pDVar1 = TypeInfo__TextureAtlasData->
                                                             static_fields->materialDataDictionary;
                                                    if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x43,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].klass = (Object__Class *)0x3f000000;
                                                    pDVar1 = TypeInfo__TextureAtlasData->
                                                             static_fields->materialDataDictionary;
                                                    if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x2f,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].klass = (Object__Class *)0x3e99999a;
                                                    pDVar1 = TypeInfo__TextureAtlasData->
                                                             static_fields->materialDataDictionary;
                                                    if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1a,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].monitor = (MonitorData *)0x3f000000;
                                                    pDVar1 = TypeInfo__TextureAtlasData->
                                                             static_fields->materialDataDictionary;
                                                    if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1c,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].monitor = (MonitorData *)0x3e4ccccd;
                                                    pDVar1 = TypeInfo__TextureAtlasData->
                                                             static_fields->materialDataDictionary;
                                                    if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x40,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].monitor = (MonitorData *)0x3e4ccccd;
                                                    pDVar1 = TypeInfo__TextureAtlasData->
                                                             static_fields->materialDataDictionary;
                                                    if (pDVar1 != (
                                                  Dictionary_2_Tile_TextureAtlasData_MaterialData_ *
                                                  )0x0) {
                                                    pOVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32Enum,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x2f,
                                                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                                  );
                                                  if (pOVar2 != (Object *)0x0) {
                                                    pOVar2[4].monitor = (MonitorData *)0x3e99999a;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StreamAtlasDataToMaterial(Material ByRef, Boolean) */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
               (Material **material,bool usingSM3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&StringLiteral__AnimationData);
    func_?(&StringLiteral__EmissionData);
    cRam_? = '\x01';
  }
  if (usingSM3 == 0) {
    if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlasData);
    }
    TextureAtlasData_StreamAtlasUVsToMaterial(material,(MethodInfo *)0x0);
  }
  this = *material;
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlasData);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                   );
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&TypeInfo__UnityEngine__Vector4);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector4__Array *)func_?(TypeInfo__UnityEngine__Vector4,0x45);
  IVar2 = 0;
  pVVar3 = pVVar1;
  do {
    if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlasData);
    }
    pDVar4 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (((pDVar4 == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) ||
        (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,IVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                            ), pOVar5 == (Object *)0x0)) || (pVVar1 == (Vector4__Array *)0x0))
    goto code_?;
    pMVar6 = pOVar5[3].monitor;
    pOVar7 = pOVar5[4].klass;
    pMVar8 = pOVar5[4].monitor;
    if (pVVar1->max_length <= IVar2) goto code_?;
    pVVar3->vector[0].x = (float)pOVar5[3].klass;
    pVVar3->vector[0].y = (float)pMVar6;
    pVVar3->vector[0].z = (float)pOVar7;
    pVVar3->vector[0].w = (float)pMVar8;
    IVar2 = IVar2 + 1;
    pVVar3 = (Vector4__Array *)pVVar3->vector;
  } while ((int)IVar2 < 0x45);
  if (this != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVectorArray_1
              (this,StringLiteral__EmissionData,pVVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pVVar1 = (Vector4__Array *)func_?();
    IVar2 = 0;
    pVVar3 = pVVar1;
    while( true ) {
      if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TextureAtlasData);
      }
      pDVar4 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if (((pDVar4 == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) ||
          (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,IVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                              ), pOVar5 == (Object *)0x0)) || (pVVar1 == (Vector4__Array *)0x0))
      break;
      pMVar6 = pOVar5[5].monitor;
      pOVar7 = pOVar5[6].klass;
      pMVar8 = pOVar5[6].monitor;
      if (pVVar1->max_length <= IVar2) goto code_?;
      pVVar3->vector[0].x = (float)pOVar5[5].klass;
      pVVar3->vector[0].y = (float)pMVar6;
      pVVar3->vector[0].z = (float)pOVar7;
      pVVar3->vector[0].w = (float)pMVar8;
      IVar2 = IVar2 + 1;
      pVVar3 = (Vector4__Array *)pVVar3->vector;
      if (0x44 < (int)IVar2) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVectorArray_1
                  ((Material *)0x45,StringLiteral__AnimationData,pVVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StreamAtlasUVsToMaterial(Material ByRef) */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
               (Material **material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&StringLiteral__TileUVData);
    func_?(&StringLiteral__AtlasColumns);
    cRam_? = '\x01';
  }
  if (*material != (Material *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                       (*material,(MethodInfo *)0x0);
    if (pTVar1 != (Texture *)0x0) {
      iVar2 = (*(code *)(pTVar1->klass->vtable).get_width.method)
                        (pTVar1,(pTVar1->klass->vtable).set_width.methodPtr);
      if (*material != (Material *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                           (*material,(MethodInfo *)0x0);
        if (pTVar1 != (Texture *)0x0) {
          iVar3 = (*(code *)(pTVar1->klass->vtable).get_height.method)
                            (pTVar1,(pTVar1->klass->vtable).set_height.methodPtr);
          if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__TextureAtlasData);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__TextureAtlasData);
            cRam_? = '\x01';
          }
          if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__TextureAtlasData);
          }
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
            cRam_? = '\x01';
          }
          VStack_4.Item1 = 0;
          VStack_4.Item2 = (void *)0x0;
          item1 = (int)((iVar2 >> 0x1f & 0xfU) + iVar2) >> 4;
          mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
                    (&VStack_4,item1,(void *)(int)((float)item1 * _UNK_?),
                     MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
          fVar5 = (float)VStack_4.Item1;
          VStack_4.Item1 = (int32_t)((float)(int)VStack_4.Item2 / (float)iVar2);
          VStack_4.Item2 = (void *)((float)(int)VStack_4.Item2 / (float)iVar3);
          if (*material != (Material *)0x0) {
            value.y = fVar5 / (float)iVar3;
            value.x = fVar5 / (float)iVar2;
            value.z = (float)VStack_4.Item1;
            value.w = (float)VStack_4.Item2;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (*material,StringLiteral__TileUVData,value,(MethodInfo *)0x0);
            if (*material != (Material *)0x0) {
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                 (*material,(MethodInfo *)0x0);
              if (pTVar1 != (Texture *)0x0) {
                iVar2 = (*(code *)(pTVar1->klass->vtable).get_width.method)
                                  (pTVar1,(pTVar1->klass->vtable).set_width.methodPtr);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__TextureAtlasData);
                  cRam_? = '\x01';
                }
                if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__TextureAtlasData);
                }
                if (cRam_? == '\0') {
                  func_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
                  cRam_? = '\x01';
                }
                VStack_4.Item1 = 0;
                VStack_4.Item2 = (void *)0x0;
                iVar3 = (int)((iVar2 >> 0x1f & 0xfU) + iVar2) >> 4;
                mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
                          (&VStack_4,iVar3,(void *)(int)((float)iVar3 * _UNK_?),
                           MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
                if (*material != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                            (*material,StringLiteral__AtlasColumns,
                             iVar2 / (VStack_4.Item1 + (int)VStack_4.Item2 * 2),(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ValueTuple`2[Int32,Int32] TileSizeAndMargin(Int32) */

ValueTuple_2_Int32_Int32_
Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_TileSizeAndMargin
          (int32_t atlasWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    cRam_? = '\x01';
  }
  VStack_1.Item1 = 0;
  VStack_1.Item2 = (void *)0x0;
  item1 = (int)((atlasWidth >> 0x1f & 0xfU) + atlasWidth) >> 4;
  mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
            (&VStack_1,item1,(void *)(int)((float)item1 * _UNK_?),
             MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
  VVar2.Item1 = VStack_1.Item1;
  VVar2.Item2 = (int32_t)VStack_1.Item2;
  return VVar2;
}


/* Vector4 TileUVData(Int32, Int32) */

Vector4 * Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_TileUVData
                    (Vector4 *__return_storage_ptr__,int32_t atlasWidth,int32_t atlasHeight,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlasData);
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    cRam_? = '\x01';
  }
  VStack_1.Item1 = 0;
  VStack_1.Item2 = (void *)0x0;
  item1 = (int)((atlasWidth >> 0x1f & 0xfU) + atlasWidth) >> 4;
  mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
            (&VStack_1,item1,(void *)(int)((float)item1 * _UNK_?),
             MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
  __return_storage_ptr__->y = (float)VStack_1.Item1 / (float)atlasHeight;
  __return_storage_ptr__->x = (float)VStack_1.Item1 / (float)atlasWidth;
  __return_storage_ptr__->z = (float)(int)VStack_1.Item2 / (float)atlasWidth;
  __return_storage_ptr__->w = (float)(int)VStack_1.Item2 / (float)atlasHeight;
  return __return_storage_ptr__;
}


/* TextureAtlasData() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    pVStack_1 = (Vector2__Array__Class *)&TypeInfo__UnityEngine__Vector2;
    func_?();
    cRam_? = '\x01';
  }
  pVStack_1 = TypeInfo__UnityEngine__Vector2;
  pVVar2 = (Vector2__Array *)func_?();
  if (pVVar2 != (Vector2__Array *)0x0) {
    if (pVVar2->max_length != 0) {
      pVVar2->vector[0].x = 0.0;
      pVVar2->vector[0].y = 0.0;
      if (1 < pVVar2->max_length) {
        pVVar2->vector[1].x = 1.0;
        pVVar2->vector[1].y = 0.0;
        if (2 < pVVar2->max_length) {
          pVVar2->vector[2].x = 1.0;
          pVVar2->vector[2].y = 1.0;
          if (3 < pVVar2->max_length) {
            pVVar2->vector[3].x = 0.0;
            pVVar2->vector[3].y = 1.0;
            TypeInfo__TextureAtlasData->static_fields->MeshUVs = pVVar2;
            pVStack_1 = (Vector2__Array__Class *)TypeInfo__TextureAtlasData->static_fields;
            func_?();
            puStack_3 = (undefined *)0x4;
            pVVar2 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2);
            if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
            if (pVVar2->max_length != 0) {
              pVVar2->vector[0].x = 0.0;
              pVVar2->vector[0].y = 0.0;
              if (1 < pVVar2->max_length) {
                pVVar2->vector[1].x = 1.0;
                pVVar2->vector[1].y = 0.0;
                if (2 < pVVar2->max_length) {
                  pVVar2->vector[2].x = 0.0;
                  pVVar2->vector[2].y = 1.0;
                  if (3 < pVVar2->max_length) {
                    pVVar2->vector[3].x = 1.0;
                    pVVar2->vector[3].y = 1.0;
                    TypeInfo__TextureAtlasData->static_fields->CubeUVs = pVVar2;
                    pVStack_1 = (Vector2__Array__Class *)
                                &TypeInfo__TextureAtlasData->static_fields->CubeUVs;
                    func_?();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    pVStack_1 = (Vector2__Array__Class *)func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  uVar5 = func_?(&puStack_3);
  func_?(uVar5);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

