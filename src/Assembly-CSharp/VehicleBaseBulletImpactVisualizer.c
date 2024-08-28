
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
  lineOfFire.m_Direction.y =
       (float)((uint)lineOfFire.m_Direction.y ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  forward.y = (float)((uint)lineOfFire.m_Direction.x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  forward.x = (float)((uint)lineOfFire.m_Origin.z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  forward.z = lineOfFire.m_Direction.y;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                     ((Quaternion *)&lineOfFire.m_Origin.y,forward,(MethodInfo *)0x0);
  position.y = voxelHit.point.x;
  position.x = (float)in_stack_2;
  position.z = voxelHit.point.y;
  lineOfFire.m_Direction.y =
       (float)OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                        (PoolEnums__Enum_VehicleBulletImpact,position,*pQVar1,
                         (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
  if ((ParticleSystem *)lineOfFire.m_Direction.y != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              ((ParticleSystem *)lineOfFire.m_Direction.y,(MethodInfo *)0x0);
    bursts = (ParticleSystem_Burst__Array *)func_?();
    if (bursts != (ParticleSystem_Burst__Array *)0x0) {
      if (bursts->max_length != 0) {
        this_00 = bursts->vector;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
        ParticleSystem_Burst_set_time(this_00,0.0,(MethodInfo *)0x0);
        if (bursts->max_length != 0) {
          voxelHit.collider._0_2_ =
               (int16_t)(int)((this->fields).particlesPerPointOfDamage * (float)shooterActorNumber);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
          ParticleSystem_Burst_set_minCount(this_00,(int16_t)voxelHit.collider,(MethodInfo *)0x0);
          if (bursts->max_length != 0) {
            voxelHit.interactionFlags._0_2_ =
                 (int16_t)(int)((this->fields).particlesPerPointOfDamage * (float)shooterActorNumber
                               );
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
            ParticleSystem_Burst_set_maxCount
                      (this_00,(int16_t)voxelHit.interactionFlags,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
            ParticleSystem_EmissionModule_SetBursts
                      ((ParticleSystem_EmissionModule *)&stack0xfffffff8,bursts,(MethodInfo *)0x0);
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      ((ParticleSystem *)lineOfFire.m_Direction.y,(MethodInfo *)0x0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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

