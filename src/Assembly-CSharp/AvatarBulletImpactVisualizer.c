
/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::AvatarBulletImpactVisualizer::
     AvatarBulletImpactVisualizer_VisualizeBulletImpact
               (AvatarBulletImpactVisualizer *this,VoxelHit voxelHit,Ray lineOfFire,
               int32_t shooterActorNumber,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ParticleSystem__Burst);
    cRam_? = '\x01';
  }
  pRVar1 = mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                     ((Regex_CachedCodeEntryKey *)&stack0xffffffe0,
                      (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)((int)&voxelHit.interactionFlags + 4),(MethodInfo *)0x0);
  uVar2 = pRVar1->_options;
  uVar3 = pRVar1->_cultureKey;
  forward.y = (float)(uVar3 ^ 
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  forward.x = (float)(uVar2 ^ 
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  forward.z = (float)((uint)pRVar1->_pattern ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     ((Quaternion *)&stack0xffffffdc,forward,(MethodInfo *)0x0);
  position.y = voxelHit.point.x;
  position.x = (float)in_stack_5;
  position.z = voxelHit.point.y;
  voxelHit.interactionFlags._0_4_ =
       OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                 (PoolEnums__Enum_AvatarBulletImpact,position,*pQVar4,
                  (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
  if ((ParticleSystem *)voxelHit.interactionFlags != (ParticleSystem *)0x0) {
    voxelHit.cubePos.z = 0;
    voxelHit._30_2_ = 0;
    voxelHit.normal.z = (float)&UNK_?;
    voxelHit.cubePos._0_4_ = (ParticleSystem *)voxelHit.interactionFlags;
    pCStack_6 = (Cube__Class *)
                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_collision
                          ((ParticleSystem *)voxelHit.interactionFlags,(MethodInfo *)0x0);
    voxelHit.cubePos.z = 1;
    voxelHit._30_2_ = 0;
    voxelHit.cubePos._0_4_ = TypeInfo__UnityEngine__ParticleSystem__Burst;
    voxelHit.normal.z = (float)&UNK_?;
    bursts = (ParticleSystem_Burst__Array *)func_?();
    if (bursts != (ParticleSystem_Burst__Array *)0x0) {
      if (bursts->max_length != 0) {
        voxelHit.cubePos.z = 0;
        voxelHit._30_2_ = 0;
        voxelHit.normal.z = (float)bursts->vector;
        voxelHit.cubePos.x = 0;
        voxelHit.cubePos.y = 0;
        voxelHit.normal.y = (float)&UNK_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
        ParticleSystem_Burst_set_time
                  ((ParticleSystem_Burst *)voxelHit.normal.z,0.0,(MethodInfo *)0x0);
        if (bursts->max_length != 0) {
          voxelHit.woId = 0;
          voxelHit._36_2_ =
               SUB42((int)((float)shooterActorNumber * (this->fields).particlesPerPointOfDamage),0);
          voxelHit._38_2_ = 0;
          voxelHit.face = (int32_t)bursts->vector;
          voxelHit._28_4_ = &UNK_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
          ParticleSystem_Burst_set_minCount
                    ((ParticleSystem_Burst *)voxelHit.face,voxelHit._36_2_,(MethodInfo *)0x0);
          if (bursts->max_length != 0) {
            voxelHit.collider = (Collider *)0x0;
            voxelHit.distance._0_2_ =
                 (int16_t)(int)((this->fields).particlesPerPointOfDamage * (float)shooterActorNumber
                               );
            voxelHit.distance._2_2_ = 0;
            voxelHit.cube = (Cube *)bursts->vector;
            voxelHit.woId = (int32_t)&UNK_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
            ParticleSystem_Burst_set_maxCount
                      ((ParticleSystem_Burst *)voxelHit.cube,voxelHit.distance._0_2_,
                       (MethodInfo *)0x0);
            voxelHit.collider = (Collider *)0x0;
            voxelHit.cube = (Cube *)&pCStack_6;
            voxelHit.distance._0_2_ = (int16_t)bursts;
            voxelHit.distance._2_2_ = (undefined2)((uint)bursts >> 0x10);
            voxelHit.woId = (int32_t)&UNK_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
            ParticleSystem_EmissionModule_SetBursts
                      ((ParticleSystem_EmissionModule *)voxelHit.cube,bursts,(MethodInfo *)0x0);
            voxelHit.collider = (Collider *)0x0;
            voxelHit.distance._0_2_ = (int16_t)(ParticleSystem *)voxelHit.interactionFlags;
            voxelHit.distance._2_2_ =
                 (undefined2)((uint)(ParticleSystem *)voxelHit.interactionFlags >> 0x10);
            voxelHit.cube = (Cube *)&UNK_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      ((ParticleSystem *)voxelHit.interactionFlags,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  voxelHit._28_4_ = &UNK_?;
  func_?();
code_?:
  voxelHit._28_4_ = &UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

