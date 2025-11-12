
/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::VehicleBaseBulletImpactVisualizer::VehicleBaseBulletImpactVisualizer_VisualizeBulletImpact(VehicleBaseBulletImpactVisualizer *this,VoxelHit *voxelHit,Ray *lineOfFire,int32_t shooterActorNumber,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__ParticleSystem__Burst,voxelHit,lineOfFire,CONCAT44(in_register_0000008c,shooterActorNumber));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (voxelHit->point).x;
  uVar1._4_4_ = (voxelHit->point).y;
  fVar2 = (voxelHit->point).z;
  uVar3._0_4_ = (lineOfFire->m_Direction).x;
  uVar3._4_4_ = (lineOfFire->m_Direction).y;
  fVar4 = -(lineOfFire->m_Direction).z;
  if (cRam_? == '\0') {
    VStack_5._0_8_ = uVar3;
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aNStack_6[0]._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  VStack_5._0_8_ = uVar3 ^ 0x8000000080000000;
  aNStack_6[0].value.g = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  QStack_7.x = 0.0;
  QStack_7.y = 0.0;
  QStack_7.z = 0.0;
  QStack_7.w = 0.0;
  pcVar8 = pcRam_?;
  VStack_5.z = fVar4;
  if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&VStack_5,aNStack_6,&QStack_7);
  aNStack_6[0].hasValue = 0;
  aNStack_6[0]._1_3_ = 0;
  aNStack_6[0].value.r = 0.0;
  aNStack_6[0].value.g = 0.0;
  aNStack_6[0].value.b = 0.0;
  aNStack_6[0].value.a = 0.0;
  VStack_5._0_8_ = uVar1;
  VStack_5.z = fVar2;
  this_00 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1(PoolEnums__Enum_VehicleBulletImpact,&VStack_5,&QStack_7,(Nullable_1_Single_)0x0,aNStack_6,(MethodInfo *)0x0);
  if (this_00 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&pPStackX_10 >> 0xc);
      uVar3 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pPStackX_10 = this_00;
    aPStackX_18[0].m_ParticleSystem = this_00;
    bursts = (ParticleSystem_Burst__Array *)FUN_?(TypeInfo__UnityEngine__ParticleSystem__Burst,1);
    if (bursts != (ParticleSystem_Burst__Array *)0x0) {
      if ((int)bursts->max_length == 0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bursts->vector[0].m_Time = 0.0;
      bursts->vector[0].m_Count.m_ConstantMin = (float)(int)(short)(int)(damage * (this->fields).particlesPerPointOfDamage);
      bursts->vector[0].m_Count.m_ConstantMax = (float)(int)(short)(int)(damage * (this->fields).particlesPerPointOfDamage);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::ParticleSystem_EmissionModule_SetBursts_1(aPStackX_18,bursts,(int32_t)bursts->max_length,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play(this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

