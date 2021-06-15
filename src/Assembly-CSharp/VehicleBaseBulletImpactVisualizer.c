
/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::VehicleBaseBulletImpactVisualizer::
     VehicleBaseBulletImpactVisualizer_VisualizeBulletImpact
               (VehicleBaseBulletImpactVisualizer *this,VoxelHit voxelHit,Ray lineOfFire,
               int32_t shooterActorNumber,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     ((Vector3 *)&stack0xffffffe4,
                      (InputToPlayerMovementAndroid *)((int)&voxelHit.interactionFlags + 4),
                      (MethodInfo *)0x0);
  uVar2._0_4_ = pVVar1->x;
  uVar2._4_4_ = pVVar1->y;
  fVar3 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar3;
  a.x = (float)(int)uVar2;
  a.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     ((Vector3 *)&stack0xffffffe4,a,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar1->x;
  uVar4._4_4_ = pVVar1->y;
  fVar3 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    pQVar5 = TypeInfo__UnityEngine__Quaternion;
    func_?();
    uVar4 = CONCAT44(uVar4._4_4_,pQVar5);
  }
  forward.z = fVar3;
  forward.x = (float)(int)uVar4;
  forward.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     ((Quaternion *)&stack0xffffffe0,forward,(MethodInfo *)0x0);
  position.y = voxelHit.point.x;
  position.x = (float)in_stack_7;
  position.z = voxelHit.point.y;
  voxelHit.cubePos._0_4_ =
       OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                 (PoolEnums__Enum_VehicleBulletImpact,position,*pQVar6,(MethodInfo *)0x0);
  voxelHit.interactionFlags._0_4_ =
       (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
       voxelHit.cubePos._0_4_;
  if ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      voxelHit.cubePos._0_4_ ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
code_?:
    voxelHit.cubePos.z = 0;
    voxelHit._30_2_ = 0;
    voxelHit.cubePos._0_4_ = &UNK_?;
    func_?();
code_?:
    voxelHit.cubePos.x = 0;
    voxelHit.cubePos.y = 0;
    voxelHit.normal.z = (float)&UNK_?;
    voxelHit.normal.z = (float)func_?();
    voxelHit.normal.y = (float)&UNK_?;
    func_?();
  }
  else {
    voxelHit.cubePos.z = 0;
    voxelHit._30_2_ = 0;
    voxelHit.normal.z = (float)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)voxelHit.cubePos._0_4_,(MethodInfo *)0x0);
    voxelHit.cubePos.z = 1;
    voxelHit._30_2_ = 0;
    voxelHit.cubePos._0_4_ = TypeInfo__UnityEngine__ParticleSystem__Burst;
    voxelHit.normal.z = (float)&UNK_?;
    fVar3 = (float)func_?();
    if (fVar3 == 0.0) goto code_?;
    voxelHit.cubePos.z = 0;
    voxelHit._30_2_ = 0;
    if (*(int *)((int)fVar3 + 0xc) == 0) goto code_?;
    fVar8 = (float)((int)fVar3 + 0x10);
    voxelHit.cubePos.x = 0;
    voxelHit.cubePos.y = 0;
    voxelHit.normal.y = (float)&UNK_?;
    voxelHit.normal.z = fVar8;
    func_?();
    voxelHit.cubePos.z = 0;
    voxelHit._30_2_ = 0;
    if (*(int *)((int)fVar3 + 0xc) != 0) {
      voxelHit.cubePos._0_4_ = (int)(fRam0000000c * (float)shooterActorNumber) & 0xffff;
      voxelHit.normal.y = (float)&UNK_?;
      voxelHit.normal.z = fVar8;
      func_?();
      voxelHit.cubePos.z = 0;
      voxelHit._30_2_ = 0;
      if (*(int *)((int)fVar3 + 0xc) != 0) {
        voxelHit.cubePos._0_4_ = (int)(fRam0000000c * (float)shooterActorNumber) & 0xffff;
        voxelHit.normal.y = (float)&UNK_?;
        voxelHit.normal.z = fVar8;
        func_?();
        voxelHit.normal.y = 0.0;
        voxelHit.point.z = (float)&stack0xfffffff8;
        voxelHit.point.y = (float)&UNK_?;
        voxelHit.normal.x = fVar3;
        func_?();
        voxelHit.point.y = 0.0;
        voxelHit.point.x =
             (float)(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)voxelHit.interactionFlags;
        in_stack_7 = &UNK_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  ((ParticleSystem *)
                   (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)voxelHit.interactionFlags,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  voxelHit.cubePos.x = 0;
  voxelHit.cubePos.y = 0;
  voxelHit.normal.z = (float)&UNK_?;
  voxelHit.normal.z = (float)func_?();
  voxelHit.normal.y = (float)&UNK_?;
  func_?();
code_?:
  voxelHit.cubePos.x = 0;
  voxelHit.cubePos.y = 0;
  voxelHit.normal.z = (float)&UNK_?;
  voxelHit.normal.z = (float)func_?();
  voxelHit.normal.y = (float)&UNK_?;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* VehicleBaseBulletImpactVisualizer() */

void Assembly-CSharp.dll::VehicleBaseBulletImpactVisualizer::VehicleBaseBulletImpactVisualizer__ctor
               (VehicleBaseBulletImpactVisualizer *this,MethodInfo *method)

{
  (this->fields).particlesPerPointOfDamage = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

