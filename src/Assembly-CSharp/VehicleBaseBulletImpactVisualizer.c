
/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::VehicleBaseBulletImpactVisualizer::
     VehicleBaseBulletImpactVisualizer_VisualizeBulletImpact
               (VehicleBaseBulletImpactVisualizer *this,VoxelHit voxelHit,Ray lineOfFire,
               int32_t shooterActorNumber,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ParticleSystem__Burst);
    cRam_? = '\x01';
  }
  forward.y = (float)((uint)lineOfFire.m_Direction.x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  forward.x = (float)((uint)lineOfFire.m_Origin.z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  forward.z = (float)((uint)lineOfFire.m_Direction.y ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     ((Quaternion *)&stack0xffffffe8,forward,(MethodInfo *)0x0);
  position.y = voxelHit.point.x;
  position.x = (float)in_stack_2;
  position.z = voxelHit.point.y;
  this_01 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                      (PoolEnums__Enum_VehicleBulletImpact,position,*pQVar1,(Nullable_1_Single_)0x0,
                       (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
  if (this_01 != (ParticleSystem *)0x0) {
    PStack_3.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(this_01,(MethodInfo *)0x0);
    bursts = (ParticleSystem_Burst__Array *)func_?();
    if (bursts != (ParticleSystem_Burst__Array *)0x0) {
      if (bursts->max_length != 0) {
        this_00 = bursts->vector;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
        ParticleSystem_Burst_set_time(this_00,0.0,(MethodInfo *)0x0);
        if (bursts->max_length != 0) {
          voxelHit.cube._0_2_ =
               (int16_t)(int)((float)shooterActorNumber * (this->fields).particlesPerPointOfDamage);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
          ParticleSystem_Burst_set_minCount(this_00,(int16_t)voxelHit.cube,(MethodInfo *)0x0);
          if (bursts->max_length != 0) {
            voxelHit.transform._0_2_ =
                 (int16_t)(int)((float)shooterActorNumber * (this->fields).particlesPerPointOfDamage
                               );
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
            ParticleSystem_Burst_set_maxCount(this_00,(int16_t)voxelHit.transform,(MethodInfo *)0x0)
            ;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
            ParticleSystem_EmissionModule_SetBursts(&PStack_3,bursts,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (this_01,(MethodInfo *)0x0);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* VehicleBaseBulletImpactVisualizer() */

void Assembly-CSharp.dll::VehicleBaseBulletImpactVisualizer::VehicleBaseBulletImpactVisualizer__ctor
               (VehicleBaseBulletImpactVisualizer *this,MethodInfo *method)

{
  (this->fields).particlesPerPointOfDamage = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

