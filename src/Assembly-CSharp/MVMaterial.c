
/* Void AddVertices(Int32) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_AddVertices
               (MVMaterial *this,int32_t direction,MethodInfo *method)

{
  uVar1 = _UNK_?;
  switch(direction) {
  case 0:
    vertex.y = (float)_UNK_?;
    vertex.x = (float)_UNK_?;
    vertex.z = -0.5;
    uVar1 = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(vertex,(MethodInfo *)0x0);
    vertex_05.y = (float)uVar1;
    vertex_05.x = (float)uVar1;
    vertex_05.z = -0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_05,(MethodInfo *)0x0);
    vertex_11.y = (float)_UNK_?;
    vertex_11.x = (float)_UNK_?;
    vertex_11.z = -0.5;
    uVar1 = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(vertex_11,(MethodInfo *)0x0);
    uVar2 = CONCAT44(_UNK_?,uVar1);
    goto code_?;
  case 1:
    vertex_00.y = (float)_UNK_?;
    vertex_00.x = (float)_UNK_?;
    vertex_00.z = 0.5;
    uVar3 = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(vertex_00,(MethodInfo *)0x0);
    vertex_06.y = (float)uVar3;
    vertex_06.x = (float)_UNK_?;
    vertex_06.z = 0.5;
    uVar1 = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(vertex_06,(MethodInfo *)0x0);
    vertex_12.y = (float)uVar1;
    vertex_12.x = (float)uVar3;
    vertex_12.z = 0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_12,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    uVar2 = CONCAT44(uVar1,uVar1);
    goto code_?;
  case 2:
    vertex_01.y = (float)_UNK_?;
    vertex_01.x = (float)_UNK_?;
    vertex_01.z = 0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_01,(MethodInfo *)0x0);
    vertex_07.y = (float)_UNK_?;
    vertex_07.x = (float)uVar1;
    vertex_07.z = -0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_07,(MethodInfo *)0x0);
    vertex_13.y = (float)uVar1;
    vertex_13.x = (float)uVar1;
    vertex_13.z = 0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_13,(MethodInfo *)0x0);
    break;
  case 3:
    vertex_02.y = (float)_UNK_?;
    vertex_02.x = (float)_UNK_?;
    vertex_02.z = -0.5;
    uVar1 = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(vertex_02,(MethodInfo *)0x0);
    vertex_08.y = (float)uVar1;
    vertex_08.x = (float)uVar1;
    vertex_08.z = 0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_08,(MethodInfo *)0x0);
    vertex_14.y = (float)_UNK_?;
    vertex_14.x = (float)uVar1;
    vertex_14.z = -0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_14,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    uVar2 = CONCAT44(_UNK_?,uVar1);
    goto code_?;
  case 4:
    vertex_03.y = (float)_UNK_?;
    vertex_03.x = (float)_UNK_?;
    vertex_03.z = 0.5;
    uVar1 = _UNK_?;
    MeshDataPool::MeshDataPool_AddVertex(vertex_03,(MethodInfo *)0x0);
    vertex_09.y = (float)uVar1;
    vertex_09.x = (float)uVar1;
    vertex_09.z = 0.5;
    uVar3 = uVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_09,(MethodInfo *)0x0);
    vertex_15.y = (float)uVar3;
    vertex_15.x = (float)uVar1;
    vertex_15.z = -0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_15,(MethodInfo *)0x0);
    break;
  case 5:
    vertex_04.y = (float)_UNK_?;
    vertex_04.x = (float)_UNK_?;
    vertex_04.z = 0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_04,(MethodInfo *)0x0);
    vertex_10.y = (float)uVar1;
    vertex_10.x = (float)uVar1;
    vertex_10.z = 0.5;
    uVar3 = uVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_10,(MethodInfo *)0x0);
    vertex_16.y = (float)uVar3;
    vertex_16.x = (float)uVar1;
    vertex_16.z = -0.5;
    MeshDataPool::MeshDataPool_AddVertex(vertex_16,(MethodInfo *)0x0);
    break;
  default:
    goto code_?;
  }
  uVar2 = CONCAT44(uVar1,uVar1);
code_?:
  method_00 = (MethodInfo *)0xbf000000;
code_?:
  vertex_17.z = (float)method_00;
  vertex_17.x = (float)(int)uVar2;
  vertex_17.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  MeshDataPool::MeshDataPool_AddVertex(vertex_17,method_00);
code_?:
  return;
}


/* Void GenerateCube(Int32) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_GenerateCube
               (MVMaterial *this,int32_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__TextureAtlasData);
    cRam_? = '\x01';
  }
  pMVar1 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
  (this->fields)._Mesh_k__BackingField = pMVar1;
  func_?(&(this->fields)._Mesh_k__BackingField,pMVar1);
  MeshDataPool::MeshDataPool_Reset((MethodInfo *)0x0);
  direction = 0;
  iVar2 = -3;
  do {
    materialID_00 = materialID;
    index = iVar2 + 4;
    MVMaterial_AddVertices(this,direction,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar2 + 3,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar2 + 5,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar2 + 6,(MethodInfo *)0x0);
    MeshDataPool::MeshDataPool_AddIndex(iVar2 + 5,(MethodInfo *)0x0);
    if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MeshDataPool::MeshDataPool_AddUvRange
              (TypeInfo__TextureAtlasData->static_fields->CubeUVs,(MethodInfo *)0x0);
    materialID = (int32_t)&UNK_?;
    pCVar3 = TextureAtlasData::TextureAtlasData_GetMaterialColorData
                       (&CStack_4,materialID_00,(MethodInfo *)0x0);
    fStack_5 = pCVar3->r;
    fStack_6 = pCVar3->g;
    fStack_7 = pCVar3->b;
    uVar8 = pCVar3->r;
    uVar9 = pCVar3->g;
    uVar10 = pCVar3->b;
    color.b = (float)uVar10;
    color.g = (float)uVar9;
    color.r = (float)uVar8;
    uStack_11 = 0x3f400000;
    color.a = 0.75;
    MeshDataPool::MeshDataPool_AddColorRepeated(color,4,(MethodInfo *)0x0);
    direction = direction + 1;
    iVar2 = index;
  } while (direction < 6);
  pMVar1 = (this->fields)._Mesh_k__BackingField;
  value = MeshDataPool::MeshDataPool_GetVertices((MethodInfo *)0x0);
  if (pMVar1 != (Mesh *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices(pMVar1,value,(MethodInfo *)0x0)
    ;
    pMVar1 = (this->fields)._Mesh_k__BackingField;
    value_00 = MeshDataPool::MeshDataPool_GetUvs((MethodInfo *)0x0);
    if (pMVar1 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(pMVar1,value_00,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._Mesh_k__BackingField;
      value_01 = MeshDataPool::MeshDataPool_GetIndices((MethodInfo *)0x0);
      if (pMVar1 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                  (pMVar1,value_01,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._Mesh_k__BackingField;
        value_02 = MeshDataPool::MeshDataPool_GetColors((MethodInfo *)0x0);
        if (pMVar1 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                    (pMVar1,value_02,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._Mesh_k__BackingField;
          if (pMVar1 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                      (pMVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RegenerateButtonTexture(Int32, MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_RegenerateButtonTexture
               (MVMaterial *this,int32_t materialId,
               MaterialButtonTextureGenerator *materialButtonTextureGenerator,MethodInfo *method)

{
  MVMaterial_GenerateCube(this,materialId,(MethodInfo *)0x0);
  if (materialButtonTextureGenerator != (MaterialButtonTextureGenerator *)0x0) {
    pTVar1 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                       (materialButtonTextureGenerator,(this->fields)._Mesh_k__BackingField,
                        (MethodInfo *)0x0);
    (this->fields)._ButtonTexture_k__BackingField = pTVar1;
    func_?(&(this->fields)._ButtonTexture_k__BackingField);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMaterial(Int32, String, String, PhysicalProperties, MaterialSound, AvatarModifierPackageType,
   Int32, Boolean, MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial__ctor_1
               (MVMaterial *this,int32_t materialId,String *name,String *description,
               PhysicalProperties physicalProperties,MaterialSound__Enum materialSound,
               AvatarModifierPackageType__Enum modifierPackageType,int32_t priceGold,bool isUnlocked
               ,MaterialButtonTextureGenerator *materialButtonTextureGenerator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._PhysicalProperties_k__BackingField.friction = physicalProperties.friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = physicalProperties.bouncyness;
  (this->fields)._PhysicalProperties_k__BackingField.softness = physicalProperties.softness;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction =
       physicalProperties.staticFriction;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = physicalProperties.toughness;
  (this->fields)._ModifierPackageType_k__BackingField = modifierPackageType;
  materialID = 0x18;
  if (materialId != 0x46) {
    materialID = materialId;
  }
  MVMaterial_GenerateCube(this,materialID,(MethodInfo *)0x0);
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Play) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)materialButtonTextureGenerator,(Object_1 *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      if (materialButtonTextureGenerator == (MaterialButtonTextureGenerator *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar4 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                         (materialButtonTextureGenerator,(this->fields)._Mesh_k__BackingField,
                          (MethodInfo *)0x0);
      (this->fields)._ButtonTexture_k__BackingField = pTVar4;
      description = (String *)&(this->fields)._ButtonTexture_k__BackingField;
      name = (String *)&UNK_?;
      func_?();
    }
  }
  (this->fields).unlockPriceGold = priceGold;
  (this->fields).isUnlocked = isUnlocked;
  (this->fields)._Name_k__BackingField = name;
  func_?();
  (this->fields)._Description_k__BackingField = description;
  func_?(&(this->fields)._Description_k__BackingField);
  return;
}


/* MVMaterial(PhysicalProperties, MaterialSound, AvatarModifierPackageType) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial__ctor_2
               (MVMaterial *this,PhysicalProperties physicalProperties,
               MaterialSound__Enum materialSound,AvatarModifierPackageType__Enum modifierPackageType
               ,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._PhysicalProperties_k__BackingField.friction = physicalProperties.friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = physicalProperties.bouncyness;
  (this->fields)._PhysicalProperties_k__BackingField.softness = physicalProperties.softness;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction =
       physicalProperties.staticFriction;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = physicalProperties.toughness;
  (this->fields)._ModifierPackageType_k__BackingField = modifierPackageType;
  return;
}


/* Boolean get_IsAvailable() */

bool Assembly-CSharp.dll::MVMaterial::MVMaterial_get_IsAvailable
               (MVMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterialRepository);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    if ((pMVar1->fields).allowDestructibleMaterialSelection == 0) {
      if ((this->fields)._PhysicalProperties_k__BackingField.toughness != _UNK_?) {
        return 0;
      }
    }
    return 1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsDestructible() */

bool Assembly-CSharp.dll::MVMaterial::MVMaterial_get_IsDestructible
               (MVMaterial *this,MethodInfo *method)

{
  if ((this->fields)._PhysicalProperties_k__BackingField.toughness == _UNK_?) {
    return 0;
  }
  return 1;
}


/* PhysicalProperties get_PhysicalProperties() */

PhysicalProperties *
Assembly-CSharp.dll::MVMaterial::MVMaterial_get_PhysicalProperties
          (PhysicalProperties *__return_storage_ptr__,MVMaterial *this,MethodInfo *method)

{
  fVar1 = (this->fields)._PhysicalProperties_k__BackingField.bouncyness;
  fVar2 = (this->fields)._PhysicalProperties_k__BackingField.softness;
  fVar3 = (this->fields)._PhysicalProperties_k__BackingField.staticFriction;
  fVar4 = (this->fields)._PhysicalProperties_k__BackingField.toughness;
  __return_storage_ptr__->friction = (this->fields)._PhysicalProperties_k__BackingField.friction;
  __return_storage_ptr__->bouncyness = fVar1;
  __return_storage_ptr__->softness = fVar2;
  __return_storage_ptr__->staticFriction = fVar3;
  __return_storage_ptr__->toughness = fVar4;
  return __return_storage_ptr__;
}


/* Void set_PhysicalProperties(PhysicalProperties) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_set_PhysicalProperties
               (MVMaterial *this,PhysicalProperties value,MethodInfo *method)

{
  (this->fields)._PhysicalProperties_k__BackingField.friction = value.friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = value.bouncyness;
  (this->fields)._PhysicalProperties_k__BackingField.softness = value.softness;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction = value.staticFriction;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = value.toughness;
  return;
}

