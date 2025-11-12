
/* Int32 AtlasColumns(Int32) */

int32_t Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_AtlasColumns
                  (int32_t atlasWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (int)(atlasWidth + (atlasWidth >> 0x1f & 0xfU)) >> 4;
  return atlasWidth / (iVar1 + (int)((float)iVar1 * _UNK_?) * 2);
}


/* Color GetMaterialColorData(Int32) */

Color * Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_GetMaterialColorData
                  (Color *__return_storage_ptr__,int32_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TextureAtlasData);
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
      *(Object__Class **)__return_storage_ptr__ = pOVar1[1].klass;
      *(MonitorData **)&__return_storage_ptr__->b = pMVar2;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pCVar4 = (Color *)(*pcVar3)();
  return pCVar4;
}


/* Vector4[] GetTileAnimationArray() */

Vector4__Array *
Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_GetTileAnimationArray(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector4__Array *)FUN_?(TypeInfo__UnityEngine__Vector4,0x45);
  key = 0;
  pVVar2 = pVVar1->vector;
  while( true ) {
    if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TextureAtlasData);
    }
    this = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (this == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this,key,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if ((pOVar3 == (Object *)0x0) || (pVVar1 == (Vector4__Array *)0x0)) break;
    if ((Int32Enum__Enum)pVVar1->max_length <= key) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pVVar1 = (Vector4__Array *)(*pcVar4)();
      return pVVar1;
    }
    fVar5 = *(float *)((longlong)&pOVar3[3].klass + 4);
    fVar6 = *(float *)&pOVar3[3].monitor;
    fVar7 = *(float *)((longlong)&pOVar3[3].monitor + 4);
    key = key + 1;
    pVVar2->x = *(float *)&pOVar3[3].klass;
    pVVar2->y = fVar5;
    pVVar2->z = fVar6;
    pVVar2->w = fVar7;
    pVVar2 = pVVar2 + 1;
    if (0x44 < (int)key) {
      return pVVar1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector4__Array *)(*pcVar4)();
  return pVVar1;
}


/* Vector4[] GetTileEmissionArray() */

Vector4__Array *
Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_GetTileEmissionArray(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector4__Array *)FUN_?(TypeInfo__UnityEngine__Vector4,0x45);
  key = 0;
  pVVar2 = pVVar1->vector;
  while( true ) {
    if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TextureAtlasData);
    }
    this = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (this == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this,key,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if ((pOVar3 == (Object *)0x0) || (pVVar1 == (Vector4__Array *)0x0)) break;
    if ((Int32Enum__Enum)pVVar1->max_length <= key) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pVVar1 = (Vector4__Array *)(*pcVar4)();
      return pVVar1;
    }
    fVar5 = *(float *)((longlong)&pOVar3[2].klass + 4);
    fVar6 = *(float *)&pOVar3[2].monitor;
    fVar7 = *(float *)((longlong)&pOVar3[2].monitor + 4);
    key = key + 1;
    pVVar2->x = *(float *)&pOVar3[2].klass;
    pVVar2->y = fVar5;
    pVVar2->z = fVar6;
    pVVar2->w = fVar7;
    pVVar2 = pVVar2 + 1;
    if (0x44 < (int)key) {
      return pVVar1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector4__Array *)(*pcVar4)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Add_Tile__TextureAtlasData__MaterialData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Dictionary_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData__MaterialData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>
                        );
  pMVar2 = MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Dictionary_int_
           ->klass->rgctx_data->method;
  FUN_?(pDVar1,0x45,pMVar2->klass->rgctx_data[2].rgctxDataDummy);
  pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
            EqualityComparer_1_System_Int32Enum__get_Default(pMVar2->klass->rgctx_data[3].method);
  key = 0;
  if ((pEVar3 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar4 = iRam_? != 0,
     (pDVar1->fields)._comparer = (IEqualityComparer_1_Tile_ *)0x0, bVar4)) {
    uVar5 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TextureAtlasData);
  }
  TypeInfo__TextureAtlasData->static_fields->materialDataDictionary = pDVar1;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__TextureAtlasData->static_fields->materialDataDictionary >>
                   0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  while( true ) {
    if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TextureAtlasData);
    }
    pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector4);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar9 = *(Object__Class **)&TypeInfo__UnityEngine__Vector4->static_fields->zeroVector;
    pMVar10 = *(MonitorData **)&(TypeInfo__UnityEngine__Vector4->static_fields->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector4);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar11 = *(Object__Class **)&TypeInfo__UnityEngine__Vector4->static_fields->zeroVector;
    pMVar12 = *(MonitorData **)&(TypeInfo__UnityEngine__Vector4->static_fields->zeroVector).z;
    pOVar13 = (Object *)FUN_?(TypeInfo__TextureAtlasData__MaterialData);
    pOVar13[2].klass = pOVar9;
    pOVar13[2].monitor = pMVar10;
    *(float *)&pOVar13[1].klass = (float)(int)key;
    *(undefined4 *)((longlong)&pOVar13[1].klass + 4) = 0;
    *(undefined4 *)&pOVar13[1].monitor = 0;
    *(undefined4 *)((longlong)&pOVar13[1].monitor + 4) = 0;
    pOVar13[3].klass = pOVar11;
    pOVar13[3].monitor = pMVar12;
    if (pDVar1 == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) break;
    in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,key,pOVar13,in_R9D,
               MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__Add_Tile__TextureAtlasData__MaterialData_
               ->klass->rgctx_data[0x22].method);
    key = key + 1;
    if (0x44 < (int)key) {
      if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
        FUN_?();
      }
      TextureAtlasData_InitializeEmissiveData((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TextureAtlasData);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TextureAtlasData);
      }
      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
         (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x3f,
                               MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                              ), pOVar13 != (Object *)0x0)) {
        *(undefined4 *)&pOVar13[3].klass = 0x3f800000;
        pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
        if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
           (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x43,
                                 MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                ), pOVar13 != (Object *)0x0)) {
          *(undefined4 *)&pOVar13[3].klass = 0x3f800000;
          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
          if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
             (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1b,
                                   MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                  ), pOVar13 != (Object *)0x0)) {
            *(undefined4 *)&pOVar13[3].monitor = 0x3f800000;
            pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
            if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
               (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x36,
                                     MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                    ), pOVar13 != (Object *)0x0)) {
              *(undefined4 *)&pOVar13[3].monitor = 0x3f800000;
              pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
              if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
                 (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1a,
                                       MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                      ), pOVar13 != (Object *)0x0)) {
                *(undefined4 *)((longlong)&pOVar13[3].monitor + 4) = 0x3d4ccccd;
                pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
                   (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x33
                                         ,
                                         MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                        ), pOVar13 != (Object *)0x0)) {
                  *(undefined4 *)((longlong)&pOVar13[3].monitor + 4) = 0x3dcccccd;
                  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                  if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
                     (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                           0x1c,
                                           MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                          ), pOVar13 != (Object *)0x0)) {
                    *(undefined4 *)((longlong)&pOVar13[3].monitor + 4) = 0x3f800000;
                    pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                    if ((pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) &&
                       (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                             0x40,
                                             MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                            ), pOVar13 != (Object *)0x0)) {
                      *(undefined4 *)((longlong)&pOVar13[3].monitor + 4) = 0x3f800000;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeAnimationData() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_InitializeAnimationData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TextureAtlasData);
  }
  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x3f,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if (pOVar2 != (Object *)0x0) {
      *(undefined4 *)&pOVar2[3].klass = 0x3f800000;
      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x43,
                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                           );
        if (pOVar2 != (Object *)0x0) {
          *(undefined4 *)&pOVar2[3].klass = 0x3f800000;
          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
          if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1b,
                                MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                               );
            if (pOVar2 != (Object *)0x0) {
              *(undefined4 *)&pOVar2[3].monitor = 0x3f800000;
              pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
              if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x36,
                                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                   );
                if (pOVar2 != (Object *)0x0) {
                  *(undefined4 *)&pOVar2[3].monitor = 0x3f800000;
                  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1a,
                                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                       );
                    if (pOVar2 != (Object *)0x0) {
                      *(undefined4 *)((longlong)&pOVar2[3].monitor + 4) = 0x3d4ccccd;
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
                          *(undefined4 *)((longlong)&pOVar2[3].monitor + 4) = 0x3dcccccd;
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
                              *(undefined4 *)((longlong)&pOVar2[3].monitor + 4) = 0x3f800000;
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
                                  *(undefined4 *)((longlong)&pOVar2[3].monitor + 4) = 0x3f800000;
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeEmissiveData() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_InitializeEmissiveData
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TextureAtlasData);
  }
  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1a,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if (pOVar2 != (Object *)0x0) {
      *(undefined4 *)&pOVar2[2].klass = 0x3f400000;
      pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x1c,
                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                           );
        if (pOVar2 != (Object *)0x0) {
          *(undefined4 *)&pOVar2[2].klass = 0x3f333333;
          pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
          if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x40,
                                MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                               );
            if (pOVar2 != (Object *)0x0) {
              *(undefined4 *)&pOVar2[2].klass = 0x3ecccccd;
              pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
              if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2d,
                                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                   );
                if (pOVar2 != (Object *)0x0) {
                  *(undefined4 *)&pOVar2[2].klass = 0x3f800000;
                  pDVar1 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
                  if (pDVar1 != (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) {
                    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2e,
                                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                                       );
                    if (pOVar2 != (Object *)0x0) {
                      *(undefined4 *)&pOVar2[2].klass = 0x3f800000;
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
                          *(undefined4 *)&pOVar2[2].klass = 0x3f666666;
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
                              *(undefined4 *)&pOVar2[2].klass = 0x3f000000;
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
                                  *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x3f800000;
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
                                      *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x3f400000;
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
                                          *(undefined4 *)&pOVar2[2].monitor = 0x3ecccccd;
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
                                              *(undefined4 *)&pOVar2[2].monitor = 0x3e4ccccd;
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
                                                  *(undefined4 *)&pOVar2[2].monitor = 0x3e4ccccd;
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
                                                    *(undefined4 *)&pOVar2[2].monitor = 0x3f000000;
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
                                                    *(undefined4 *)&pOVar2[2].monitor = 0x3f000000;
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
                                                    *(undefined4 *)&pOVar2[2].monitor = 0x3e99999a;
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
                                                    *(undefined4 *)
                                                     ((longlong)&pOVar2[2].monitor + 4) = 0x3f000000
                                                    ;
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
                                                    *(undefined4 *)
                                                     ((longlong)&pOVar2[2].monitor + 4) = 0x3e4ccccd
                                                    ;
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
                                                    *(undefined4 *)
                                                     ((longlong)&pOVar2[2].monitor + 4) = 0x3e4ccccd
                                                    ;
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
                                                    *(undefined4 *)
                                                     ((longlong)&pOVar2[2].monitor + 4) = 0x3e99999a
                                                    ;
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StreamAtlasDataToMaterial(Material ByRef, Boolean) */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
               (Material **material,bool usingSM3,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AnimationData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__EmissionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (usingSM3 == 0) {
    if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
      FUN_?();
    }
    TextureAtlasData_StreamAtlasUVsToMaterial(material,(MethodInfo *)0x0);
  }
  pMVar1 = *material;
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = (Vector4__Array *)FUN_?(TypeInfo__UnityEngine__Vector4,0x45);
  IVar3 = 0;
  pVVar4 = pVVar2->vector;
  do {
    if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TextureAtlasData);
    }
    pDVar5 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if (pDVar5 == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0)
    goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,IVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                       );
    if ((pOVar6 == (Object *)0x0) || (pVVar2 == (Vector4__Array *)0x0)) goto code_?;
    if ((Int32Enum__Enum)pVVar2->max_length <= IVar3) goto code_?;
    fVar7 = *(float *)((longlong)&pOVar6[2].klass + 4);
    fVar8 = *(float *)&pOVar6[2].monitor;
    fVar9 = *(float *)((longlong)&pOVar6[2].monitor + 4);
    IVar3 = IVar3 + 1;
    pVVar4->x = *(float *)&pOVar6[2].klass;
    pVVar4->y = fVar7;
    pVVar4->z = fVar8;
    pVVar4->w = fVar9;
    pVVar4 = pVVar4 + 1;
  } while ((int)IVar3 < 0x45);
  if (pMVar1 != (Material *)0x0) {
    iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__EmissionData,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVectorArray
              (pMVar1,iVar10,pVVar2,(int32_t)pVVar2->max_length,(MethodInfo *)0x0);
    pMVar1 = *material;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__TextureAtlasData);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Vector4);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = (Vector4__Array *)FUN_?(TypeInfo__UnityEngine__Vector4,0x45);
    IVar3 = 0;
    pVVar4 = pVVar2->vector;
    do {
      if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TextureAtlasData);
      }
      pDVar5 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
      if (pDVar5 == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0)
      goto code_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,IVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                         );
      if ((pOVar6 == (Object *)0x0) || (pVVar2 == (Vector4__Array *)0x0)) goto code_?;
      if ((Int32Enum__Enum)pVVar2->max_length <= IVar3) {
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar7 = *(float *)((longlong)&pOVar6[3].klass + 4);
      fVar8 = *(float *)&pOVar6[3].monitor;
      fVar9 = *(float *)((longlong)&pOVar6[3].monitor + 4);
      IVar3 = IVar3 + 1;
      pVVar4->x = *(float *)&pOVar6[3].klass;
      pVVar4->y = fVar7;
      pVVar4->z = fVar8;
      pVVar4->w = fVar9;
      pVVar4 = pVVar4 + 1;
    } while ((int)IVar3 < 0x45);
    if (pMVar1 != (Material *)0x0) {
      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__AnimationData,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVectorArray
                (pMVar1,iVar10,pVVar2,(int32_t)pVVar2->max_length,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StreamAtlasUVsToMaterial(Material ByRef) */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
               (Material **material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TileUVData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__AtlasColumns);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((*material != (Material *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                         (*material,(MethodInfo *)0x0), pTVar1 != (Texture *)0x0)) {
    iVar2 = (*(pTVar1->klass->vtable).get_width.methodPtr)(pTVar1);
    if ((*material != (Material *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                           (*material,(MethodInfo *)0x0), pTVar1 != (Texture *)0x0)) {
      iVar3 = (*(pTVar1->klass->vtable).get_height.methodPtr)
                        (pTVar1,(pTVar1->klass->vtable).get_height.method);
      if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TextureAtlasData);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4;
      VStack_5.y = (float)iVar4 / (float)iVar3;
      VStack_5.x = (float)iVar4 / (float)iVar2;
      VStack_5.w = (float)(int)((float)iVar4 * _UNK_?) / (float)iVar3;
      VStack_5.z = (float)(int)((float)iVar4 * _UNK_?) / (float)iVar2;
      if (*material != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (*material,StringLiteral__TileUVData,&VStack_5,(MethodInfo *)0x0);
        if ((*material != (Material *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (*material,(MethodInfo *)0x0), pTVar1 != (Texture *)0x0)) {
          iVar2 = (*(pTVar1->klass->vtable).get_width.methodPtr)
                            (pTVar1,(pTVar1->klass->vtable).get_width.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__TextureAtlasData);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          obj = *material;
          iVar2 = (int)((iVar2 >> 0x1f & 0xfU) + iVar2) >> 4;
          fVar6 = (float)iVar2 * _UNK_?;
          if (obj != (Material *)0x0) {
            iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              (StringLiteral__AtlasColumns,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                            ,iVar7,iVar2 + (int)fVar6 * 2,0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Material);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (Material *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pvVar9 = (obj->fields)._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
              FUN_?();
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar9,iVar7);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ValueTuple`2[Int32,Int32] TileSizeAndMargin(Int32) */

ValueTuple_2_Int32_Int32_
Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_TileSizeAndMargin
          (int32_t atlasWidth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (int)(atlasWidth + (atlasWidth >> 0x1f & 0xfU)) >> 4;
  VVar2.Item2 = (int)((float)iVar1 * _UNK_?);
  VVar2.Item1 = iVar1;
  return VVar2;
}


/* Vector4 TileUVData(Int32, Int32) */

Vector4 * Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData_TileUVData
                    (Vector4 *__return_storage_ptr__,int32_t atlasWidth,int32_t atlasHeight,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (int)(atlasWidth + (atlasWidth >> 0x1f & 0xfU)) >> 4;
  fVar2 = (float)iVar1 * _UNK_?;
  __return_storage_ptr__->x = (float)iVar1 / (float)atlasWidth;
  __return_storage_ptr__->y = (float)iVar1 / (float)atlasHeight;
  __return_storage_ptr__->z = (float)(int)fVar2 / (float)atlasWidth;
  __return_storage_ptr__->w = (float)(int)fVar2 / (float)atlasHeight;
  return __return_storage_ptr__;
}


/* TextureAtlasData() */

void Assembly-CSharp.dll::TextureAtlasData::TextureAtlasData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,4);
  if (pVVar1 == (Vector2__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((int)pVVar1->max_length != 0) &&
      (pVVar1->vector[0].x = 0.0, pVVar1->vector[0].y = 0.0, 1 < (uint)pVVar1->max_length)) &&
     (pVVar1->vector[1].x = 1.0, pVVar1->vector[1].y = 0.0, 2 < (uint)pVVar1->max_length)) {
    pVVar1->vector[2].x = 1.0;
    pVVar1->vector[2].y = 1.0;
    if (3 < (uint)pVVar1->max_length) {
      pVVar1->vector[3].x = 0.0;
      pVVar1->vector[3].y = 1.0;
      TypeInfo__TextureAtlasData->static_fields->MeshUVs = pVVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)TypeInfo__TextureAtlasData->static_fields >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pVVar1 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,4);
      if (pVVar1 == (Vector2__Array *)0x0) goto code_?;
      if ((((int)pVVar1->max_length != 0) &&
          (pVVar1->vector[0].x = 0.0, pVVar1->vector[0].y = 0.0, 1 < (uint)pVVar1->max_length)) &&
         (pVVar1->vector[1].x = 1.0, pVVar1->vector[1].y = 0.0, 2 < (uint)pVVar1->max_length)) {
        pVVar1->vector[2].x = 0.0;
        pVVar1->vector[2].y = 1.0;
        if (3 < (uint)pVVar1->max_length) {
          pVVar1->vector[3].x = 1.0;
          pVVar1->vector[3].y = 1.0;
          TypeInfo__TextureAtlasData->static_fields->CubeUVs = pVVar1;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&TypeInfo__TextureAtlasData->static_fields->CubeUVs >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

