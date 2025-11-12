
/* Void AddVertices(Int32) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_AddVertices
               (MVMaterial *this,int32_t direction,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  switch(direction) {
  case 0:
    aVStack_3[0].y = _UNK_?;
    aVStack_3[0].x = _UNK_?;
    aVStack_3[0].z = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar1;
    aVStack_3[0].y = fVar2;
    aVStack_3[0].x = fVar2;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar1;
    aVStack_3[0].y = fVar1;
    aVStack_3[0].x = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar1;
    break;
  case 1:
    aVStack_3[0].z = _UNK_?;
    aVStack_3[0].y = _UNK_?;
    aVStack_3[0].x = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    fVar5 = fVar2;
    goto code_?;
  case 2:
    aVStack_3[0].z = _UNK_?;
    aVStack_3[0].y = _UNK_?;
    aVStack_3[0].x = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar1;
    aVStack_3[0].y = fVar2;
    aVStack_3[0].x = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar2;
    fVar2 = fVar1;
    goto code_?;
  case 3:
    aVStack_3[0].y = _UNK_?;
    aVStack_3[0].x = _UNK_?;
    aVStack_3[0].z = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar2;
    aVStack_3[0].y = fVar2;
    aVStack_3[0].x = fVar2;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar1;
    aVStack_3[0].y = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar2;
    break;
  case 4:
    aVStack_3[0].z = _UNK_?;
    aVStack_3[0].y = _UNK_?;
    aVStack_3[0].x = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    fVar4 = fVar2;
    fVar5 = fVar1;
code_?:
    fVar1 = fVar4;
    aVStack_3[0].z = fVar2;
    aVStack_3[0].y = fVar2;
    aVStack_3[0].x = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].y = fVar1;
    aVStack_3[0].x = fVar5;
    aVStack_3[0].z = fVar5;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    fVar2 = fVar1;
    aVStack_3[0].z = fVar5;
    break;
  case 5:
    aVStack_3[0].y = _UNK_?;
    aVStack_3[0].x = _UNK_?;
    aVStack_3[0].z = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar2;
    aVStack_3[0].y = fVar1;
    aVStack_3[0].x = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    aVStack_3[0].z = fVar1;
code_?:
    aVStack_3[0].y = fVar1;
    aVStack_3[0].x = fVar2;
    MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
    fVar2 = fVar1;
    aVStack_3[0].z = fVar1;
    break;
  default:
    goto DAT_?;
  }
  aVStack_3[0].y = fVar1;
  aVStack_3[0].x = fVar2;
  MeshDataPool::MeshDataPool_AddVertex(aVStack_3,(MethodInfo *)0x0);
DAT_?:
  return;
}


/* Void GenerateCube(Int32) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_GenerateCube
               (MVMaterial *this,int32_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mesh);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (Mesh *)FUN_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._Mesh_k__BackingField = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._Mesh_k__BackingField >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  MeshDataPool::MeshDataPool_Reset((MethodInfo *)0x0);
  iVar7 = 0;
  valuesArrayLength = 0;
  iVar8 = -3;
  do {
    index = iVar8 + 4;
    MVMaterial_AddVertices(this,iVar7,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar8 + 3,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar8 + 5,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar8 + 6,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar8 + 5,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
      FUN_?();
    }
    MeshDataPool::MeshDataPool_AddUvRange
              (TypeInfo__TextureAtlasData->static_fields->CubeUVs,(MethodInfo *)0x0);
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
    this_00 = TypeInfo__TextureAtlasData->static_fields->materialDataDictionary;
    if ((this_00 == (Dictionary_2_Tile_TextureAtlasData_MaterialData_ *)0x0) ||
       (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,materialID,
                            MethodInfo__System__Collections__Generic__Dictionary<Tile,_TextureAtlasData::MaterialData>__get_Item_Tile_
                           ), pOVar9 == (Object *)0x0)) goto code_?;
    pOVar10 = pOVar9[1].klass;
    lVar11 = 4;
    uStack_12 = (Object__Array *)CONCAT44(0.75,*(float *)&pOVar9[1].monitor);
    pOVar13 = uStack_12;
    auStack_14 = (undefined1  [8])pOVar10;
    do {
      pOStack_15 = pOVar13;
      pOStack_16 = pOVar10;
      MeshDataPool::MeshDataPool_AddColor((Color *)&pOStack_16,(MethodInfo *)0x0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar7 = iVar7 + 1;
    iVar8 = index;
  } while (iVar7 < 6);
  pMVar1 = (this->fields)._Mesh_k__BackingField;
  this_01 = MeshDataPool::MeshDataPool_GetVertices((MethodInfo *)0x0);
  if (pMVar1 != (Mesh *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar7 = valuesArrayLength;
    if (this_01 != (Vector3__Array *)0x0) {
      iVar7 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_01,(MethodInfo *)0x0);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
              (pMVar1,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
               (Array *)this_01,iVar7,0,iVar7,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._Mesh_k__BackingField;
    this_02 = MeshDataPool::MeshDataPool_GetUvs((MethodInfo *)0x0);
    if (pMVar1 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar7 = valuesArrayLength;
      if (this_02 != (Vector2__Array *)0x0) {
        iVar7 = mscorlib.dll::System::Array::Array_get_Length((Array *)this_02,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar1,VertexAttribute__Enum_TexCoord0,VertexAttributeFormat__Enum_Float32,2,
                 (Array *)this_02,iVar7,0,iVar7,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._Mesh_k__BackingField;
      value = MeshDataPool::MeshDataPool_GetIndices((MethodInfo *)0x0);
      if (pMVar1 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                  (pMVar1,value,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._Mesh_k__BackingField;
        this_03 = MeshDataPool::MeshDataPool_GetColors((MethodInfo *)0x0);
        if (pMVar1 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Color_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this_03 != (Color__Array *)0x0) {
            valuesArrayLength =
                 mscorlib.dll::System::Array::Array_get_Length((Array *)this_03,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (pMVar1,VertexAttribute__Enum_Color,VertexAttributeFormat__Enum_Float32,4,
                     (Array *)this_03,valuesArrayLength,0,valuesArrayLength,
                     MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._Mesh_k__BackingField;
          if (pMVar1 != (Mesh *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateN);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pMVar1 == (Mesh *)0x0) {
              FUN_?();
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pvVar18 = (pMVar1->fields)._.m_CachedPtr;
            if (pvVar18 != (void *)0x0) {
              pcVar17 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pcRam_? = pcVar17;
              cVar20 = (*pcRam_?)(pvVar18);
              if (cVar20 == '\0') {
                arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                 ((Object_1 *)pMVar1,(MethodInfo *)0x0);
                pSVar21 = StringLiteral_Not_allowed_to_call_RecalculateN;
                auStack_14 = (undefined1  [8])0x0;
                uStack_12 = (Object__Array *)0x0;
                pOStack_16 = (Object__Class *)0x0;
                pOStack_15 = (Object__Array *)0x0;
                mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                          ((ParamsArray *)auStack_14,(Object *)arg0,(MethodInfo *)0x0);
                pOStack_22 = (Object *)auStack_14;
                pOStack_23 = (Object *)uStack_12;
                pSVar21 = mscorlib.dll::System::String::String_FormatHelper
                                    ((IFormatProvider *)0x0,pSVar21,(ParamsArray *)&pOStack_22,
                                     (MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar21,(MethodInfo *)0x0);
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar18 = (pMVar1->fields)._.m_CachedPtr;
              if (pvVar18 != (void *)0x0) {
                pcVar17 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                  uVar19 = func_?(&UNK_?);
                  FUN_?(uVar19,0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pcRam_? = pcVar17;
                (*pcRam_?)(pvVar18,0);
                return;
              }
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void RegenerateButtonTexture(MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_RegenerateButtonTexture
               (MVMaterial *this,MaterialButtonTextureGenerator *materialButtonTextureGenerator,
               MethodInfo *method)

{
  if (materialButtonTextureGenerator == (MaterialButtonTextureGenerator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                     (materialButtonTextureGenerator,(this->fields)._Mesh_k__BackingField,
                      (MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._ButtonTexture_k__BackingField = pTVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._ButtonTexture_k__BackingField >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* MVMaterial(PhysicalProperties, MaterialSound, AvatarModifierPackageType) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial__ctor_1
               (MVMaterial *this,PhysicalProperties *physicalProperties,
               MaterialSound__Enum materialSound,AvatarModifierPackageType__Enum modifierPackageType
               ,MethodInfo *method)

{
  fVar1 = physicalProperties->friction;
  fVar2 = physicalProperties->bouncyness;
  fVar3 = physicalProperties->softness;
  fVar4 = physicalProperties->staticFriction;
  fVar5 = physicalProperties->toughness;
  (this->fields)._ModifierPackageType_k__BackingField = modifierPackageType;
  (this->fields)._PhysicalProperties_k__BackingField.friction = fVar1;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar2;
  (this->fields)._PhysicalProperties_k__BackingField.softness = fVar3;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar4;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = fVar5;
  return;
}


/* MVMaterial(String, String, PhysicalProperties, MaterialSound, AvatarModifierPackageType, Int32,
   Boolean) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial__ctor_2
               (MVMaterial *this,String *name,String *description,
               PhysicalProperties *physicalProperties,MaterialSound__Enum materialSound,
               AvatarModifierPackageType__Enum modifierPackageType,int32_t unlockPriceGold,
               bool isUnlocked,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields)._Name_k__BackingField = name;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Name_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._Description_k__BackingField = description;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Description_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  fVar7 = physicalProperties->toughness;
  fVar8 = physicalProperties->bouncyness;
  fVar9 = physicalProperties->softness;
  fVar10 = physicalProperties->staticFriction;
  (this->fields)._PhysicalProperties_k__BackingField.friction = physicalProperties->friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar8;
  (this->fields)._PhysicalProperties_k__BackingField.softness = fVar9;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar10;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = fVar7;
  (this->fields)._ModifierPackageType_k__BackingField = modifierPackageType;
  (this->fields).unlockPriceGold = unlockPriceGold;
  (this->fields).isUnlocked = isUnlocked;
  return;
}


/* MVMaterial(Int32, String, String, PhysicalProperties, MaterialSound, AvatarModifierPackageType,
   Int32, Boolean, MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial__ctor_3
               (MVMaterial *this,int32_t materialId,String *name,String *description,
               PhysicalProperties *physicalProperties,MaterialSound__Enum materialSound,
               AvatarModifierPackageType__Enum modifierPackageType,int32_t unlockPriceGold,
               bool isUnlocked,MaterialButtonTextureGenerator *materialButtonTextureGenerator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields)._Name_k__BackingField = name;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Name_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._Description_k__BackingField = description;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Description_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  fVar7 = physicalProperties->bouncyness;
  fVar8 = physicalProperties->softness;
  fVar9 = physicalProperties->staticFriction;
  fVar10 = physicalProperties->toughness;
  (this->fields)._PhysicalProperties_k__BackingField.friction = physicalProperties->friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar7;
  (this->fields)._PhysicalProperties_k__BackingField.softness = fVar8;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar9;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = fVar10;
  (this->fields)._ModifierPackageType_k__BackingField = modifierPackageType;
  (this->fields).unlockPriceGold = unlockPriceGold;
  (this->fields).isUnlocked = isUnlocked;
  materialID = 0x18;
  if (materialId != 0x46) {
    materialID = materialId;
  }
  MVMaterial_GenerateCube(this,materialID,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar11 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((pGVar11->fields).gameMode != 1) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (materialButtonTextureGenerator != (MaterialButtonTextureGenerator *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((materialButtonTextureGenerator->fields)._._._._.m_CachedPtr != (void *)0x0) {
        method_00 = (MethodInfo *)0x0;
        value = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                 *)MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                             (materialButtonTextureGenerator,(this->fields)._Mesh_k__BackingField,
                              (MethodInfo *)0x0);
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
        ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_valueUpdated
                  ((ValueAnimation_1_StyleValues_ *)this,value,method_00);
      }
    }
  }
  return;
}


/* Boolean get_IsAvailable() */

bool Assembly-CSharp.dll::MVMaterial::MVMaterial_get_IsAvailable
               (MVMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 == (MVMaterialRepository *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (((pMVar1->fields).allowDestructibleMaterialSelection == 0) &&
     ((this->fields)._PhysicalProperties_k__BackingField.toughness != 0.0)) {
    return 0;
  }
  return 1;
}


/* Boolean get_IsDestructible() */

bool Assembly-CSharp.dll::MVMaterial::MVMaterial_get_IsDestructible
               (MVMaterial *this,MethodInfo *method)

{
  if ((this->fields)._PhysicalProperties_k__BackingField.toughness != 0.0) {
    return 1;
  }
  return 0;
}


/* PhysicalProperties get_PhysicalProperties() */

PhysicalProperties *
Assembly-CSharp.dll::MVMaterial::MVMaterial_get_PhysicalProperties
          (PhysicalProperties *__return_storage_ptr__,MVMaterial *this,MethodInfo *method)

{
  fVar1 = (this->fields)._PhysicalProperties_k__BackingField.toughness;
  fVar2 = (this->fields)._PhysicalProperties_k__BackingField.bouncyness;
  fVar3 = (this->fields)._PhysicalProperties_k__BackingField.softness;
  fVar4 = (this->fields)._PhysicalProperties_k__BackingField.staticFriction;
  __return_storage_ptr__->friction = (this->fields)._PhysicalProperties_k__BackingField.friction;
  __return_storage_ptr__->bouncyness = fVar2;
  __return_storage_ptr__->softness = fVar3;
  __return_storage_ptr__->staticFriction = fVar4;
  __return_storage_ptr__->toughness = fVar1;
  return __return_storage_ptr__;
}


/* Void set_PhysicalProperties(PhysicalProperties) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_set_PhysicalProperties
               (MVMaterial *this,PhysicalProperties *value,MethodInfo *method)

{
  fVar1 = value->bouncyness;
  fVar2 = value->softness;
  fVar3 = value->staticFriction;
  fVar4 = value->toughness;
  (this->fields)._PhysicalProperties_k__BackingField.friction = value->friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar1;
  (this->fields)._PhysicalProperties_k__BackingField.softness = fVar2;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar3;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = fVar4;
  return;
}

