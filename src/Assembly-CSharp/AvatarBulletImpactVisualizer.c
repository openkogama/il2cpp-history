
/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::AvatarBulletImpactVisualizer::
     AvatarBulletImpactVisualizer_VisualizeBulletImpact
               (AvatarBulletImpactVisualizer *this,VoxelHit *voxelHit,Ray *lineOfFire,
               int32_t shooterActorNumber,float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__ParticleSystem__Burst,voxelHit,lineOfFire,
                  CONCAT44(in_register_0000008c,shooterActorNumber));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (voxelHit->point).x;
  uVar1._4_4_ = (voxelHit->point).y;
  fVar2 = (voxelHit->point).z;
  VStack_3.x = (lineOfFire->m_Direction).x;
  VStack_3.y = (lineOfFire->m_Direction).y;
  fVar4 = (float)((uint)VStack_3.x ^ _UNK_?);
  fVar5 = (float)((uint)(lineOfFire->m_Direction).z ^ _UNK_?);
  fVar6 = (float)((uint)VStack_3.y ^ _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aNStack_7[0]._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  VStack_3.y = fVar6;
  VStack_3.x = fVar4;
  aNStack_7[0].value.g = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  QStack_8.x = 0.0;
  QStack_8.y = 0.0;
  QStack_8.z = 0.0;
  QStack_8.w = 0.0;
  pcVar9 = pcRam_?;
  VStack_3.z = fVar5;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(&VStack_3,aNStack_7,&QStack_8);
  aNStack_7[0].hasValue = 0;
  aNStack_7[0]._1_3_ = 0;
  aNStack_7[0].value.r = 0.0;
  aNStack_7[0].value.g = 0.0;
  aNStack_7[0].value.b = 0.0;
  aNStack_7[0].value.a = 0.0;
  VStack_3._0_8_ = uVar1;
  VStack_3.z = fVar2;
  this_00 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                      (PoolEnums__Enum_AvatarBulletImpact,&VStack_3,&QStack_8,
                       (Nullable_1_Single_)0x0,aNStack_7,(MethodInfo *)0x0);
  if (this_00 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&pPStackX_10 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    pPStackX_10 = this_00;
    aPStackX_18[0].m_ParticleSystem = this_00;
    bursts = (ParticleSystem_Burst__Array *)
             FUN_?(TypeInfo__UnityEngine__ParticleSystem__Burst,1);
    if (bursts != (ParticleSystem_Burst__Array *)0x0) {
      if ((int)bursts->max_length == 0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bursts->vector[0].m_Time = 0.0;
      bursts->vector[0].m_Count.m_ConstantMin =
           (float)(int)(short)(int)(damage * (this->fields).particlesPerPointOfDamage);
      bursts->vector[0].m_Count.m_ConstantMax =
           (float)(int)(short)(int)(damage * (this->fields).particlesPerPointOfDamage);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_SetBursts_1
                (aPStackX_18,bursts,(int32_t)bursts->max_length,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

