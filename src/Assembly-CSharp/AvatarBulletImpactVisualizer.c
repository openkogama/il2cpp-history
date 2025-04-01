
/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::AvatarBulletImpactVisualizer::AvatarBulletImpactVisualizer_VisualizeBulletImpact(AvatarBulletImpactVisualizer *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ParticleSystem__Burst);
    cRam_? = '\x01';
  }
  uVar1 = lineOfFire._8_8_ ^ 0x8000000080000000;
  forward.z = -lineOfFire.m_Direction.y;
  forward.x = (float)(int)uVar1;
  forward.y = (float)(int)(uVar1 >> 0x20);
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1((Quaternion *)&stack0xffffffe8,forward,(MethodInfo *)0x0);
  position.y = voxelHit.point.x;
  position.x = (float)in_stack_3;
  position.z = voxelHit.point.y;
  this_01 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1(PoolEnums__Enum_AvatarBulletImpact,position,*pQVar2,(Nullable_1_Single_)0x0,(Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
  if (this_01 != (ParticleSystem *)0x0) {
    PStack_4.m_ParticleSystem = (ParticleSystem *)UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision(this_01,(MethodInfo *)0x0);
    bursts = (ParticleSystem_Burst__Array *)func_?();
    if (bursts != (ParticleSystem_Burst__Array *)0x0) {
      if (bursts->max_length != 0) {
        this_00 = bursts->vector;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::ParticleSystem_Burst_set_time(this_00,0.0,(MethodInfo *)0x0);
        if (bursts->max_length != 0) {
          voxelHit.cube._0_2_ = (int16_t)(int)((float)shooterActorNumber * (this->fields).particlesPerPointOfDamage);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::ParticleSystem_Burst_set_minCount(this_00,(int16_t)voxelHit.cube,(MethodInfo *)0x0);
          if (bursts->max_length != 0) {
            voxelHit.transform._0_2_ = (int16_t)(int)((float)shooterActorNumber * (this->fields).particlesPerPointOfDamage);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::ParticleSystem_Burst_set_maxCount(this_00,(int16_t)voxelHit.transform,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::ParticleSystem_EmissionModule_SetBursts(&PStack_4,bursts,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1(this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

