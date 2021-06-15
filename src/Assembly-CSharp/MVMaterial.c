
/* Void AddVertices(Int32) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_AddVertices
               (MVMaterial *this,int32_t direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(direction) {
  case 0:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xfffffff0,0xbf000000,0x3f000000,0xbf000000,0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    vertex.y = (float)uVar3;
    vertex.x = (float)uVar2;
    vertex.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xffffffe4);
    vertex_05.y = (float)uVar3;
    vertex_05.x = (float)uVar2;
    vertex_05.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_05,(MethodInfo *)0x0);
    puVar4 = &stack0xffffffd8;
    fVar1 = -0.5;
    uVar2 = 0xbf000000;
    func_?();
    vertex_11.y = (float)uVar2;
    vertex_11.x = (float)puVar4;
    vertex_11.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_11,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?();
    goto code_?;
  case 1:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xffffffcc,0x3f000000,0x3f000000,0x3f000000,0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    vertex_00.y = (float)uVar3;
    vertex_00.x = (float)uVar2;
    vertex_00.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_00,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0;
    func_?(&stack0xffffffd8);
    vertex_06.y = (float)uVar3;
    vertex_06.x = (float)uVar2;
    vertex_06.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_06,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0x3f000000;
    func_?();
    vertex_12.y = (float)uVar3;
    vertex_12.x = (float)uVar2;
    vertex_12.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_12,(MethodInfo *)0x0);
    break;
  case 2:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xffffffcc,0xbf000000,0x3f000000,0x3f000000,0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    vertex_01.y = (float)uVar3;
    vertex_01.x = (float)uVar2;
    vertex_01.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_01,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0;
    func_?(&stack0xffffffd8);
    vertex_07.y = (float)uVar3;
    vertex_07.x = (float)uVar2;
    vertex_07.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_07,(MethodInfo *)0x0);
    goto code_?;
  case 3:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xffffffcc,0x3f000000,0x3f000000,0xbf000000,0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    vertex_02.y = (float)uVar3;
    vertex_02.x = (float)uVar2;
    vertex_02.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_02,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0;
    func_?(&stack0xffffffd8);
    vertex_08.y = (float)uVar3;
    vertex_08.x = (float)uVar2;
    vertex_08.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_08,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0xbf000000;
    func_?();
    vertex_13.y = (float)uVar3;
    vertex_13.x = (float)uVar2;
    vertex_13.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_13,(MethodInfo *)0x0);
    break;
  case 4:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xffffffcc,0xbf000000,0x3f000000,0x3f000000,0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    vertex_03.y = (float)uVar3;
    vertex_03.x = (float)uVar2;
    vertex_03.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_03,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0;
    func_?(&stack0xffffffd8);
    vertex_09.y = (float)uVar3;
    vertex_09.x = (float)uVar2;
    vertex_09.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_09,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0xbf000000;
    func_?();
    vertex_14.y = (float)uVar3;
    vertex_14.x = (float)uVar2;
    vertex_14.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_14,(MethodInfo *)0x0);
    break;
  case 5:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?(&stack0xffffffcc,0x3f000000,0xbf000000,0x3f000000,0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__MeshDataPool);
    }
    vertex_04.y = (float)uVar3;
    vertex_04.x = (float)uVar2;
    vertex_04.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_04,(MethodInfo *)0x0);
    fVar1 = 0.0;
    uVar3 = 0;
    uVar2 = 0;
    func_?(&stack0xffffffd8);
    vertex_10.y = (float)uVar3;
    vertex_10.x = (float)uVar2;
    vertex_10.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_10,(MethodInfo *)0x0);
code_?:
    fVar1 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    func_?();
    vertex_15.y = (float)uVar3;
    vertex_15.x = (float)uVar2;
    vertex_15.z = fVar1;
    MeshDataPool::MeshDataPool_AddVertex(vertex_15,(MethodInfo *)0x0);
    break;
  default:
    goto code_?;
  }
  fVar1 = 0.0;
  uVar2 = 0;
  uVar3 = 0;
  func_?();
code_?:
  vertex_16.y = (float)uVar3;
  vertex_16.x = (float)uVar2;
  vertex_16.z = fVar1;
  MeshDataPool::MeshDataPool_AddVertex(vertex_16,(MethodInfo *)0x0);
code_?:
  return;
}


/* Void GenerateCube(Int32) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial_GenerateCube
               (MVMaterial *this,int32_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
  (this->fields)._Mesh_k__BackingField = pMVar1;
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  MeshDataPool::MeshDataPool_Reset((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
    func_?(TypeInfo__TextureAtlas);
  }
  VVar2 = TextureAtlas::TextureAtlas_GetAtlasPoint(materialId,(MethodInfo *)0x0);
  direction = 0;
  iVar3 = -3;
  do {
    index = iVar3 + 4;
    MVMaterial_AddVertices(this,direction,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      VVar2.x = (float)TypeInfo__MeshDataPool;
      func_?();
    }
    uVar4 = (ulonglong)VVar2 & 0xffffffff00000000;
    MeshDataPool::MeshDataPool_AddIndex(iVar3 + 3,(MethodInfo *)0x0);
    uVar4 = uVar4 & 0xffffffff00000000;
    MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
    uVar4 = uVar4 & 0xffffffff00000000;
    MeshDataPool::MeshDataPool_AddIndex(iVar3 + 5,(MethodInfo *)0x0);
    uVar4 = uVar4 & 0xffffffff00000000;
    MeshDataPool::MeshDataPool_AddIndex(index,(MethodInfo *)0x0);
    uVar4 = uVar4 & 0xffffffff00000000;
    MeshDataPool::MeshDataPool_AddIndex(iVar3 + 6,(MethodInfo *)0x0);
    VVar2 = (Vector2)(uVar4 & 0xffffffff00000000);
    MeshDataPool::MeshDataPool_AddIndex(iVar3 + 5,(MethodInfo *)0x0);
    puVar5 = &stack0xfffffff4;
    func_?();
    MeshDataPool::MeshDataPool_AddUv((Vector2)(ZEXT48(puVar5) << 0x20),(MethodInfo *)0x0);
    uv_00.x = 0.0;
    uv_00.y = 0.0;
    func_?();
    MeshDataPool::MeshDataPool_AddUv(uv_00,(MethodInfo *)0x0);
    uv.x = 0.0;
    uv.y = 0.0;
    func_?();
    this = (MVMaterial *)uv.x;
    MeshDataPool::MeshDataPool_AddUv(uv,(MethodInfo *)0x0);
    func_?();
    MeshDataPool::MeshDataPool_AddUv((Vector2)0x0,(MethodInfo *)0x0);
    iVar3 = 4;
    do {
      uVar6 = 0;
      uVar7 = 0;
      fVar8 = 0.0;
      fVar9 = VVar2.y;
      func_?(&stack0xffffffc4,0x3f800000,VVar2.x);
      if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__MeshDataPool);
      }
      color.g = (float)uVar6;
      color.r = fVar9;
      color.b = (float)uVar7;
      color.a = fVar8;
      MeshDataPool::MeshDataPool_AddColor(color,(MethodInfo *)0x0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    direction = direction + 1;
    iVar3 = index;
  } while (direction < 6);
  pMVar1 = (this->fields)._Mesh_k__BackingField;
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?();
  }
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._PhysicalProperties_k__BackingField.friction = physicalProperties.friction;
  (this->fields)._PhysicalProperties_k__BackingField.bouncyness = physicalProperties.bouncyness;
  (this->fields)._PhysicalProperties_k__BackingField.softness = physicalProperties.softness;
  (this->fields)._PhysicalProperties_k__BackingField.staticFriction =
       physicalProperties.staticFriction;
  (this->fields)._PhysicalProperties_k__BackingField.toughness = physicalProperties.toughness;
  (this->fields)._ModifierPackageType_k__BackingField = modifierPackageType;
  materialId_00 = 0x18;
  if (materialId != 0x46) {
    materialId_00 = materialId;
  }
  MVMaterial_GenerateCube(this,materialId_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Play) {
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)materialButtonTextureGenerator,(Object_1 *)0x0,(MethodInfo *)0x0)
    ;
    name = unaff_EDI;
    if (bVar2 != 0) {
      if (materialButtonTextureGenerator == (MaterialButtonTextureGenerator *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      description = (String *)(this->fields)._Mesh_k__BackingField;
      name = (String *)materialButtonTextureGenerator;
      pTVar4 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                         (materialButtonTextureGenerator,(Mesh *)description,(MethodInfo *)0x0);
      (this->fields)._ButtonTexture_k__BackingField = pTVar4;
    }
  }
  (this->fields).unlockPriceGold = priceGold;
  (this->fields).isUnlocked = isUnlocked;
  (this->fields)._Name_k__BackingField = name;
  (this->fields)._Description_k__BackingField = description;
  return;
}


/* MVMaterial(PhysicalProperties, MaterialSound, AvatarModifierPackageType) */

void Assembly-CSharp.dll::MVMaterial::MVMaterial__ctor_2
               (MVMaterial *this,PhysicalProperties physicalProperties,
               MaterialSound__Enum materialSound,AvatarModifierPackageType__Enum modifierPackageType
               ,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
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
  func_?(0);
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

