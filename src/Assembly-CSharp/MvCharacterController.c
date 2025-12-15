
/* Void Awake() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Awake
               (MvCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  if (TypeInfo__MvCharacterController->static_fields->layerMask == -1) {
    uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MvCharacterController);
    }
    TypeInfo__MvCharacterController->static_fields->layerMask =
         ~(1 << (uVar1 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar2 & 0x1f));
  }
  return;
}


/* Boolean CheckOverLap() */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CheckOverLap
               (MvCharacterController *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_3[0].x = 0.0;
  aVStack_3[0].y = 0.0;
  aVStack_3[0].z = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,aVStack_3);
  uVar6 = (this->fields).center.x;
  uVar7 = (this->fields).center.y;
  aVStack_3[0].z = aVStack_3[0].z + (this->fields).center.z;
  aVStack_3[0].y = aVStack_3[0].y + (float)uVar7;
  aVStack_3[0].x = aVStack_3[0].x + (float)uVar6;
  bVar2 = MvCharacterController_OverlapCheckCollision(this,aVStack_3,(MethodInfo *)0x0);
  return bVar2;
}


/* Vector3 CollideWithWorld(Vector3 ByRef, Vector3 ByRef, Boolean ByRef) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CollideWithWorld
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,Vector3 *ePos,
                    Vector3 *eVel,bool *foundValidPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = 0.0;
  auStack_1._4_4_ = 0.0;
  auStack_1._8_4_ = 0.0;
  auStack_1._12_4_ = 0.0;
  iStack_2 = 0;
  auStack_1._16_4_ = 0.0;
  auStack_1._20_4_ = 0.0;
  auStack_1._24_4_ = 0.0;
  auStack_1._28_4_ = 0.0;
  uStack_3._0_4_ = 0.0;
  uStack_3._4_4_ = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  pCStack_5 = (Cube *)0x0;
  uStack_6._0_4_ = 0.0;
  uStack_6._4_4_ = 0;
  pCStack_7 = (Collider *)0x0;
  pTStack_8 = (Transform *)0x0;
  if (7 < (this->fields).collisionRecursionDepth) {
    QStack_9.x = eVel->x;
    QStack_9.y = eVel->y;
    RStack_10.m_Origin.x = ePos->x;
    RStack_10.m_Origin.y = ePos->y;
    QStack_9.z = eVel->z;
    RStack_10.m_Origin.z = ePos->z;
    pMVar11 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)&QStack_12,this,
                         &RStack_10.m_Origin,(Vector3 *)&QStack_9,1,(MethodInfo *)0x0);
    uVar13 = *(undefined8 *)&(pMVar11->position).z;
    fVar14 = (pMVar11->position).y;
    if ((char)((ulonglong)uVar13 >> 0x20) == '\0') {
      *foundValidPosition = 0;
      fVar15 = ePos->y;
      fVar14 = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = fVar15;
      __return_storage_ptr__->z = fVar14;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->x = (pMVar11->position).x;
    __return_storage_ptr__->y = fVar14;
    __return_storage_ptr__->z = (float)uVar13;
    return __return_storage_ptr__;
  }
  fVar16 = eVel->x * (this->fields).elipsoidRadius.x;
  fVar17 = (this->fields).elipsoidRadius.y * eVel->y;
  fVar14 = (this->fields).elipsoidRadius.z * eVel->z;
  fVar18 = (this->fields).elipsoidRadius.y * ePos->y;
  fVar19 = (this->fields).elipsoidRadius.z * ePos->z;
  fVar20 = ePos->x * (this->fields).elipsoidRadius.x;
  QStack_21.y = fVar17;
  QStack_21.x = fVar16;
  QStack_21.z = fVar14;
  QStack_22._0_8_ = QStack_21._0_8_;
  QStack_22.z = fVar14;
  fStack_23 = fVar18;
  fStack_24 = fVar19;
  fVar25 = (float)FUN_?(&QStack_21);
  fVar15 = _UNK_?;
  if (_UNK_? < fVar25) {
    QStack_21.x = fVar16 / fVar25;
    fVar26 = fVar14 / fVar25;
    QStack_21.y = fVar17 / fVar25;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_21.x = (pVVar27->zeroVector).x;
    QStack_21.y = (pVVar27->zeroVector).y;
    fVar26 = (pVVar27->zeroVector).z;
  }
  fVar25 = QStack_21.x;
  fVar28 = QStack_21.y;
  QStack_21.z = fVar26;
  fVar29 = (float)FUN_?(&QStack_21);
  if (fVar15 < fVar29) {
    fVar26 = fVar26 / fVar29;
    QStack_21.y = fVar28 / fVar29;
    QStack_21.x = fVar25 / fVar29;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_21.x = (pVVar27->zeroVector).x;
    QStack_21.y = (pVVar27->zeroVector).y;
    fVar26 = (pVVar27->zeroVector).z;
  }
  fVar28 = QStack_21.x;
  uVar13._0_4_ = (this->fields).elipsoidRadius.x;
  uVar13._4_4_ = (this->fields).elipsoidRadius.y;
  fVar25 = (this->fields).elipsoidRadius.z;
  fVar29 = (float)FUN_?(&QStack_22);
  ignoreWoIds = (this->fields).IgnoreWoIds;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_10.m_Origin.y = fVar18;
  RStack_10.m_Origin.x = fVar20;
  RStack_10.m_Direction.x = fVar28;
  RStack_10.m_Origin.z = fVar19;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar30 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar31._0_4_ = (pQVar30->identityQuaternion).x;
  uVar31._4_4_ = (pQVar30->identityQuaternion).y;
  uVar32._0_4_ = (pQVar30->identityQuaternion).z;
  uVar32._4_4_ = (pQVar30->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10.m_Direction.z = fVar26;
  RStack_10.m_Direction.y = QStack_21.y;
  QStack_12._0_8_ = uVar13;
  QStack_12.z = fVar25;
  QStack_9._0_8_ = uVar31;
  QStack_9._8_8_ = uVar32;
  bVar33 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                     (&RStack_10,(Vector3 *)&QStack_12,&QStack_9,fVar29,(VoxelHit *)auStack_1,
                      ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (bVar33 == 0) {
    QStack_9.x = eVel->x;
    QStack_9.y = eVel->y;
    RStack_10.m_Origin.x = ePos->x;
    RStack_10.m_Origin.y = ePos->y;
    QStack_9.z = eVel->z;
    RStack_10.m_Origin.z = ePos->z;
    pMVar11 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)&QStack_12,this,
                         &RStack_10.m_Origin,(Vector3 *)&QStack_9,1,(MethodInfo *)0x0);
    uVar13 = *(undefined8 *)&(pMVar11->position).z;
    fVar14 = (pMVar11->position).y;
    if ((char)((ulonglong)uVar13 >> 0x20) != '\0') {
      __return_storage_ptr__->x = (pMVar11->position).x;
      __return_storage_ptr__->y = fVar14;
      __return_storage_ptr__->z = (float)uVar13;
      return __return_storage_ptr__;
    }
    fVar15 = ePos->y;
    fVar14 = ePos->z;
    __return_storage_ptr__->x = ePos->x;
    __return_storage_ptr__->y = fVar15;
    goto code_?;
  }
  QStack_21.x = (this->fields).elipsoidRadius.x;
  QStack_21.y = (this->fields).elipsoidRadius.y;
  fVar18 = (float)uStack_6;
  fVar25 = (this->fields).elipsoidRadius.z;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_12.y = fVar17;
  QStack_12.x = fVar16;
  QStack_12.z = fVar14;
  fVar19 = (float)FUN_?(&QStack_12);
  if (fVar15 < fVar19) {
    fVar14 = fVar14 / fVar19;
    QStack_9.y = fVar17 / fVar19;
    QStack_9.x = fVar16 / fVar19;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_9.x = (pVVar27->zeroVector).x;
    QStack_9.y = (pVVar27->zeroVector).y;
    fVar14 = (pVVar27->zeroVector).z;
  }
  QStack_12.x = QStack_9.x;
  QStack_12.x = (QStack_12.x * fVar18) / QStack_21.x;
  QStack_12.y = (QStack_9.y * fVar18) / QStack_21.y;
  QStack_12.z = (fVar14 * fVar18) / fVar25;
  fVar14 = (float)FUN_?(&QStack_12);
  fVar16 = (float)auStack_1._0_4_ / (this->fields).elipsoidRadius.x;
  QStack_21.z = eVel->z;
  uVar34 = 0;
  fVar17 = (float)auStack_1._4_4_ / (this->fields).elipsoidRadius.y;
  fVar18 = (float)auStack_1._8_4_ / (this->fields).elipsoidRadius.z;
  QStack_12.y = fVar17;
  QStack_12.x = fVar16;
  QStack_21.x = eVel->x;
  QStack_21.y = eVel->y;
  RStack_10.m_Origin.x = ePos->x;
  RStack_10.m_Origin.y = ePos->y;
  QStack_12.z = fVar18;
  RStack_10.m_Origin.z = ePos->z;
  fVar25 = MvCharacterController_GetCollisionAngle
                     (&RStack_10.m_Origin,(Vector3 *)&QStack_21,fVar14,(Vector3 *)&QStack_12,
                      (MethodInfo *)0x0);
  if ((fVar25 <= _UNK_?) || (fVar14 == 0.0)) {
    uVar35 = eVel->x;
    uVar36 = eVel->y;
    uVar37 = ePos->x;
    uVar38 = ePos->y;
    fStack_39 = (float)uVar35 + (float)uVar37;
    fVar25 = ePos->z;
    fVar19 = eVel->z;
    uVar40._0_4_ = ePos->x;
    uVar40._4_4_ = ePos->y;
    fVar26 = ePos->z;
    uVar41._0_4_ = eVel->x;
    uVar41._4_4_ = eVel->y;
    fVar28 = eVel->z;
    QStack_21._0_8_ = uVar41;
    QStack_9._0_8_ = uVar41;
    QStack_42._0_8_ = uVar40;
    QStack_42.z = fVar26;
    if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MvCharacterController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_10.m_Origin.y = fVar17;
    RStack_10.m_Origin.x = fVar16;
    QStack_12.x = QStack_21.x;
    QStack_12.y = QStack_21.y;
    uVar34 = 0;
    QStack_21._0_8_ = uVar40;
    QStack_21.z = fVar26;
    QStack_12.z = fVar28;
    RStack_10.m_Origin.z = fVar18;
    fVar26 = MvCharacterController_GetCollisionAngle
                       ((Vector3 *)&QStack_21,(Vector3 *)&QStack_12,fVar14,&RStack_10.m_Origin,
                        (MethodInfo *)0x0);
    auVar43._0_4_ = fVar26 * _UNK_?;
    auVar43._4_12_ = extraout_var;
    fVar26 = (float)FUN_?(auVar43._0_8_);
    RStack_10.m_Origin.z = fVar28;
    fVar29 = _UNK_? / fVar26 - (_UNK_? / fVar26) * _UNK_?;
    RStack_10.m_Origin._0_8_ = uVar41;
    fVar26 = (float)FUN_?(&RStack_10);
    if (fVar15 < fVar26) {
      QStack_21.x = QStack_9.x / fVar26;
      fVar28 = fVar28 / fVar26;
      QStack_21.y = QStack_9.y / fVar26;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_21.x = (pVVar27->zeroVector).x;
      QStack_21.y = (pVVar27->zeroVector).y;
      fVar28 = (pVVar27->zeroVector).z;
    }
    if ((fVar14 - fVar29 < 0.0) || (fVar29 <= 0.0)) {
      RStack_10.m_Origin.z = eVel->z;
      QStack_12.z = ePos->z;
      QStack_9.y = fVar17;
      QStack_9.x = fVar16;
      RStack_10.m_Origin.x = eVel->x;
      RStack_10.m_Origin.y = eVel->y;
      QStack_12.x = ePos->x;
      QStack_12.y = ePos->y;
      QStack_9.z = fVar18;
      puVar44 = (undefined8 *)
                (*(this->klass->vtable).__unknown_4.methodPtr)
                          (&QStack_22,this,&QStack_12,&RStack_10,CONCAT44(uVar34,fVar14),
                           &QStack_9,(this->klass->vtable).__unknown_4.method);
      VStack_45._0_8_ = *puVar44;
      VStack_45.z = *(float *)(puVar44 + 1);
      fVar25 = (float)*puVar44;
      fVar16 = (float)((ulonglong)*puVar44 >> 0x20);
      fVar14 = *(float *)(puVar44 + 1);
      fVar15 = (float)FUN_?(eVel);
      VStack_45.x = fVar25 * fVar15;
      VStack_45.z = fVar14 * fVar15;
      VStack_45.y = fVar16 * fVar15;
      pVVar46 = &VStack_45;
      goto code_?;
    }
    fVar14 = fVar14 - fVar29;
    uVar47 = ePos->x;
    uVar48 = ePos->y;
    fVar26 = QStack_21.x * fVar14 + (float)uVar47;
    fVar15 = QStack_21.y * fVar14 + (float)uVar48;
    QStack_42.z = fVar28 * fVar14 + ePos->z;
    QStack_42.y = fVar15;
    QStack_42.x = fVar26;
    uStack_49 = 0;
    uStack_50 = 0;
    QStack_12.x = fVar16 - QStack_21.x * fVar29;
    QStack_12.z = fVar18 - fVar28 * fVar29;
    QStack_9.y = (float)uVar38 + (float)uVar36;
    QStack_9.x = fStack_39;
    QStack_12.y = fVar17 - QStack_21.y * fVar29;
    RStack_10.m_Origin.y = fVar15;
    RStack_10.m_Origin.x = fVar26;
    QStack_9.z = fVar25 + fVar19;
    RStack_10.m_Origin.z = QStack_42.z;
    puVar44 = (undefined8 *)
              (*(this->klass->vtable).__unknown_2.methodPtr)
                        (&QStack_21,this,&QStack_12,&RStack_10,&QStack_9,&uStack_49,
                         (this->klass->vtable).__unknown_2.method);
    aVStack_51[0].z = *(float *)(puVar44 + 1);
    aVStack_51[0]._0_8_ = *puVar44;
    FUN_?(auStack_52,0,0xa8);
    QStack_9.x = QStack_22.x;
    QStack_9.y = QStack_22.y;
    RStack_10.m_Origin.x = (this->fields).elipsoidRadius.x;
    RStack_10.m_Origin.y = (this->fields).elipsoidRadius.y;
    QStack_12.y = fStack_23;
    QStack_12.x = fVar20;
    QStack_12.z = fStack_24;
    auStack_53._16_8_ = auStack_1._16_8_;
    auStack_53._24_8_ = auStack_1._24_8_;
    auStack_53._0_8_ = auStack_1._0_8_;
    auStack_53._8_8_ = auStack_1._8_8_;
    QStack_9.z = QStack_22.z;
    auStack_53._48_8_ = pCStack_5;
    auStack_53._56_8_ = uStack_6;
    RStack_10.m_Origin.z = (this->fields).elipsoidRadius.z;
    auStack_53._32_4_ = (float)uStack_3;
    auStack_53._36_4_ = uStack_3._4_4_;
    auStack_53._40_4_ = (float)uStack_4;
    auStack_53._44_4_ = uStack_4._4_4_;
    iStack_54 = iStack_2;
    pCStack_55 = pCStack_7;
    pTStack_56 = pTStack_8;
    MVControllerColliderHit::MVControllerColliderHit__ctor
              ((MVControllerColliderHit *)auStack_52,(VoxelHit *)auStack_53,(Vector3 *)&QStack_12
               ,&RStack_10.m_Origin,(Vector3 *)&QStack_9,0,(MethodInfo *)0x0);
    auStack_53._0_8_ = auStack_52._0_8_;
    auStack_53._8_8_ = auStack_52._8_8_;
    auStack_53._16_8_ = auStack_52._16_8_;
    auStack_53._24_8_ = auStack_52._24_8_;
    auStack_53._32_8_ = auStack_52._32_8_;
    auStack_53._40_8_ = auStack_52._40_8_;
    auStack_53._48_8_ = auStack_52._48_8_;
    auStack_53._56_8_ = auStack_52._56_8_;
    pCStack_55 = pCStack_57;
    pTStack_56 = pTStack_58;
    iStack_54 = iStack_59;
    IStack_60 = IStack_61;
    uStack_62 = uStack_63;
    iStack_64 = iStack_65;
    bStack_66 = bStack_67;
    uStack_68 = uStack_69;
    iStack_70 = iStack_71;
    uStack_72 = uStack_73;
    pCStack_74 = pCStack_75;
    fStack_76 = fStack_77;
    uStack_78 = uStack_79;
    pCStack_80 = pCStack_81;
    pTStack_82 = pTStack_83;
    iStack_84 = iStack_85;
    pMStack_86 = pMStack_87;
    bStack_88 = bStack_89;
    uStack_90 = uStack_91;
    MvCharacterController_SendCharacterCollision
              (this,(MVControllerColliderHit *)auStack_53,(MethodInfo *)0x0);
    pVVar46 = aVStack_51;
    ePos = (Vector3 *)&QStack_42;
  }
  else {
    QStack_12.z = eVel->z;
    QStack_22.z = ePos->z;
    RStack_10.m_Origin.y = fVar17;
    RStack_10.m_Origin.x = fVar16;
    QStack_12.x = eVel->x;
    QStack_12.y = eVel->y;
    QStack_22.x = ePos->x;
    QStack_22.y = ePos->y;
    RStack_10.m_Origin.z = fVar18;
    puVar44 = (undefined8 *)
              (*(this->klass->vtable).__unknown_4.methodPtr)
                        (&QStack_9,this,&QStack_22,&QStack_12,CONCAT44(uVar34,fVar14),
                         &RStack_10,(this->klass->vtable).__unknown_4.method);
    VStack_92._0_8_ = *puVar44;
    VStack_92.z = *(float *)(puVar44 + 1);
    fVar25 = (float)*puVar44;
    fVar16 = (float)((ulonglong)*puVar44 >> 0x20);
    fVar14 = *(float *)(puVar44 + 1);
    fVar15 = (float)FUN_?(eVel);
    VStack_92.x = fVar25 * fVar15;
    VStack_92.z = fVar14 * fVar15;
    VStack_92.y = fVar16 * fVar15;
    pVVar46 = &VStack_92;
code_?:
    QStack_9.y = fVar16;
    QStack_9.x = fVar25;
  }
  piVar93 = &(this->fields).collisionRecursionDepth;
  *piVar93 = *piVar93 + 1;
  pVVar46 = MvCharacterController_CollideWithWorld
                      ((Vector3 *)&QStack_9,this,ePos,pVVar46,foundValidPosition,(MethodInfo *)0x0
                      );
  fVar15 = pVVar46->y;
  fVar14 = pVVar46->z;
  __return_storage_ptr__->x = pVVar46->x;
  __return_storage_ptr__->y = fVar15;
code_?:
  __return_storage_ptr__->z = fVar14;
  return __return_storage_ptr__;
}


/* Single DistanceESpaceToR3Space(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceESpaceToR3Space
                (float eDistance,Vector3 *eDir,Vector3 *R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (aVStack_2,eDir,(MethodInfo *)R3Radius);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  uStack_5 = CONCAT44((float)uVar4 * eDistance * R3Radius->y,(float)uVar3 * eDistance * R3Radius->x
                      );
  fStack_6 = pVVar1->z * eDistance * R3Radius->z;
  fVar7 = (float)FUN_?(&uStack_5);
  return fVar7;
}


/* Single DistanceR3SpaceToESpace(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceR3SpaceToESpace
                (float distance,Vector3 *R3Dir,Vector3 *R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (aVStack_2,R3Dir,(MethodInfo *)R3Radius);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  uStack_5 = CONCAT44(((float)uVar4 * distance) / R3Radius->y,
                       ((float)uVar3 * distance) / R3Radius->x);
  fStack_6 = (pVVar1->z * distance) / R3Radius->z;
  fVar7 = (float)FUN_?(&uStack_5);
  return fVar7;
}


/* Single GetCollisionAngle(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetCollisionAngle
                (Vector3 *ePos,Vector3 *eDir,float distance,Vector3 *ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1._0_4_ = eDir->x;
  uStack_1._4_4_ = eDir->y;
  fStack_2 = eDir->z;
  fVar3 = (float)FUN_?(&uStack_1);
  if (_UNK_? < fVar3) {
    uVar4 = eDir->x;
    uVar5 = eDir->y;
    fVar6 = eDir->z / fVar3;
    uStack_1 = CONCAT44((float)uVar5 / fVar3,(float)uVar4 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_1._0_4_ = (pVVar7->zeroVector).x;
    uStack_1._4_4_ = (pVVar7->zeroVector).y;
    fVar6 = (pVVar7->zeroVector).z;
  }
  uVar8 = ePos->x;
  uVar9 = ePos->y;
  uStack_10._0_4_ = ePoint->x;
  uStack_10._4_4_ = ePoint->y;
  fVar11 = (float)(undefined4)uStack_10 - ((float)uStack_1 * distance + (float)uVar8);
  fVar12 = (float)uStack_10._4_4_ - (uStack_1._4_4_ * distance + (float)uVar9);
  fVar6 = ePoint->z - (fVar6 * distance + ePos->z);
  uStack_1 = CONCAT44(fVar12,fVar11);
  fStack_2 = fVar6;
  fVar3 = (float)FUN_?(&uStack_1);
  if (_UNK_? < fVar3) {
    fStack_2 = fVar6 / fVar3;
    uStack_1 = CONCAT44(fVar12 / fVar3,fVar11 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_1._0_4_ = (pVVar7->zeroVector).x;
    uStack_1._4_4_ = (pVVar7->zeroVector).y;
    fStack_2 = (pVVar7->zeroVector).z;
  }
  uStack_10._0_4_ = eDir->x;
  uStack_10._4_4_ = eDir->y;
  fStack_13 = eDir->z;
  fVar3 = (float)FUN_?(&uStack_10,&uStack_1);
  return fVar3;
}


/* Vector3 GetGradientDirection(VoxelHit) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetGradientDirection
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,
                    VoxelHit *elipsoidHit,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar1 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar1)();
      return pVVar2;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar5,&uStack_3);
    uVar7 = (this->fields).center.x;
    uVar8 = (this->fields).center.y;
    fVar9 = (float)uStack_3 + (float)uVar7;
    fVar10 = fStack_4 + (this->fields).center.z;
    fVar11 = uStack_3._4_4_ + (float)uVar8;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = elipsoidHit->distance;
    uVar14 = (pVVar12->downVector).x;
    fVar15 = ((float)uVar14 * fVar13 + fVar9) / (this->fields).elipsoidRadius.x -
             (elipsoidHit->point).x / (this->fields).elipsoidRadius.x;
    fVar16 = ((pVVar12->downVector).y * fVar13 + fVar11) / (this->fields).elipsoidRadius.y -
             (elipsoidHit->point).y / (this->fields).elipsoidRadius.y;
    fVar9 = ((pVVar12->downVector).z * fVar13 + fVar10) / (this->fields).elipsoidRadius.z -
             (elipsoidHit->point).z / (this->fields).elipsoidRadius.z;
    uStack_3 = CONCAT44(fVar16,fVar15);
    fStack_4 = fVar9;
    fVar11 = (float)FUN_?(&uStack_3);
    if (_UNK_? < fVar11) {
      fVar9 = fVar9 / fVar11;
      uStack_3 = CONCAT44(fVar16 / fVar11,fVar15 / fVar11);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_3._0_4_ = (pVVar12->zeroVector).x;
      uStack_3._4_4_ = (pVVar12->zeroVector).y;
      fVar9 = (pVVar12->zeroVector).z;
    }
    fVar11 = uStack_3._4_4_;
    if (uStack_3._4_4_ == 0.0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar11 = (pVVar12->downVector).y;
      fVar9 = (pVVar12->downVector).z;
      __return_storage_ptr__->x = (pVVar12->downVector).x;
      __return_storage_ptr__->y = fVar11;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar10 = (float)uStack_3;
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar17 = (pVVar12->upVector).x;
      uVar18 = (pVVar12->upVector).y;
      fVar13 = fVar9 - (pVVar12->upVector).z;
      if (_UNK_? <=
          (fVar11 - (float)uVar18) * (fVar11 - (float)uVar18) +
          ((float)uStack_3 - (float)uVar17) * ((float)uStack_3 - (float)uVar17) + fVar13 * fVar13) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar19 = (pVVar12->upVector).x;
        uVar20 = (pVVar12->upVector).y;
        fVar15 = fVar9 * (float)uVar20 - fVar11 * (pVVar12->upVector).z;
        fVar16 = fVar10 * (pVVar12->upVector).z - fVar9 * (float)uVar19;
        fVar13 = fVar11 * (float)uVar19 - fVar10 * (float)uVar20;
        fVar21 = (fVar11 * fVar13 - fVar9 * fVar16) * (this->fields).elipsoidRadius.x;
        fVar13 = (fVar9 * fVar15 - fVar10 * fVar13) * (this->fields).elipsoidRadius.y;
        fVar9 = (fVar10 * fVar16 - fVar11 * fVar15) * (this->fields).elipsoidRadius.z;
        uStack_3 = CONCAT44(fVar13,fVar21);
        fStack_4 = fVar9;
        fVar11 = (float)FUN_?(&uStack_3);
        if (_UNK_? < fVar11) {
          fVar9 = fVar9 / fVar11;
          uStack_3 = CONCAT44(fVar13 / fVar11,fVar21 / fVar11);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_3._0_4_ = (pVVar12->zeroVector).x;
          uStack_3._4_4_ = (pVVar12->zeroVector).y;
          fVar9 = (pVVar12->zeroVector).z;
        }
        uVar22 = (uint)uStack_3._4_4_ ^ _UNK_?;
        fVar9 = (float)((uint)fVar9 ^ _UNK_?);
        __return_storage_ptr__->x = (float)((uint)(float)uStack_3 ^ _UNK_?);
        __return_storage_ptr__->y = (float)uVar22;
        __return_storage_ptr__->z = fVar9;
        return __return_storage_ptr__;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar11 = (pVVar12->zeroVector).y;
      fVar9 = (pVVar12->zeroVector).z;
      __return_storage_ptr__->x = (pVVar12->zeroVector).x;
      __return_storage_ptr__->y = fVar11;
    }
    __return_storage_ptr__->z = fVar9;
    return __return_storage_ptr__;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar1)();
  return pVVar2;
}


/* Single GetMoveBackDistance(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetMoveBackDistance
                (Vector3 *ePos,Vector3 *eDir,float distance,Vector3 *ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.z = ePoint->z;
  VStack_1.x = ePoint->x;
  VStack_1.y = ePoint->y;
  VStack_2.x = eDir->x;
  VStack_2.y = eDir->y;
  VStack_2.z = eDir->z;
  aVStack_3[0].x = ePos->x;
  aVStack_3[0].y = ePos->y;
  aVStack_3[0].z = ePos->z;
  fVar4 = MvCharacterController_GetCollisionAngle
                    (aVStack_3,&VStack_2,distance,&VStack_1,(MethodInfo *)0x0);
  fVar4 = (float)FUN_?(fVar4 * _UNK_?);
  return _UNK_? / fVar4 - (_UNK_? / fVar4) * _UNK_?;
}


/* Vector3 GetNormal(Vector3, Vector3, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 *ePos,Vector3 *eDir,float distance,
                    Vector3 *ePoint,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  method_00 = (MethodInfo *)ePos;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(eDir,(MethodInfo *)ePos);
  uVar1 = ePos->x;
  uVar2 = ePos->y;
  uVar3 = eDir->x;
  fVar4 = eDir->y;
  uVar5 = ePoint->x;
  fVar6 = ePoint->z;
  fVar7 = ePoint->y;
  fVar8 = eDir->z;
  fVar9 = ePos->z;
  __return_storage_ptr__->x = (float)uVar5 - ((float)uVar3 * distance + (float)uVar1);
  __return_storage_ptr__->y = fVar7 - (fVar4 * distance + (float)uVar2);
  __return_storage_ptr__->z = fVar6 - (fVar8 * distance + fVar9);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (__return_storage_ptr__,method_00);
  return __return_storage_ptr__;
}


/* Vector3 GetNormalizedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormalizedVector
                    (Vector3 *__return_storage_ptr__,Vector3 *InpVec,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (aVStack_2,InpVec,method);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  if (__return_storage_ptr__->x * __return_storage_ptr__->x +
      __return_storage_ptr__->y * __return_storage_ptr__->y +
      __return_storage_ptr__->z * __return_storage_ptr__->z == 0.0) {
    uVar5 = InpVec->x;
    uVar6 = InpVec->y;
    fVar7 = (float)uVar6 * _UNK_?;
    fVar8 = (float)uVar5 * _UNK_?;
    fVar4 = InpVec->z * _UNK_?;
    aVStack_2[0].y = fVar7;
    aVStack_2[0].x = fVar8;
    aVStack_2[0].z = fVar4;
    fVar3 = (float)FUN_?(aVStack_2);
    if (_UNK_? < fVar3) {
      fVar4 = fVar4 / fVar3;
      uVar9 = CONCAT44(fVar7 / fVar3,fVar8 / fVar3);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar9._0_4_ = (pVVar10->zeroVector).x;
      uVar9._4_4_ = (pVVar10->zeroVector).y;
      fVar4 = (pVVar10->zeroVector).z;
    }
    __return_storage_ptr__->x = (float)(int)uVar9;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar9 >> 0x20);
    __return_storage_ptr__->z = fVar4;
  }
  return __return_storage_ptr__;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetOverlappingObjects
          (MvCharacterController *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MVOverlapResult_ *)(*pcVar1)();
    return pLVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MVOverlapResult_ *)(*pcVar1)();
    return pLVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MVOverlapResult_ *)(*pcVar1)();
    return pLVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&VStack_3);
  VStack_6.x = (this->fields).center.x;
  VStack_6.y = (this->fields).center.y;
  fVar7 = VStack_3.x + VStack_6.x;
  fVar8 = VStack_3.z + (this->fields).center.z;
  fVar9 = VStack_3.y + VStack_6.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar5._0_4_ = (this->fields).elipsoidRadius.x;
  uVar5._4_4_ = (this->fields).elipsoidRadius.y;
  fVar10 = (this->fields).elipsoidRadius.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar12._0_4_ = (pQVar11->identityQuaternion).x;
  uVar12._4_4_ = (pQVar11->identityQuaternion).y;
  uVar13._0_4_ = (pQVar11->identityQuaternion).z;
  uVar13._4_4_ = (pQVar11->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_3.y = fVar9;
  VStack_3.x = fVar7;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  VStack_3.z = fVar8;
  VStack_6._0_8_ = uVar5;
  VStack_6.z = fVar10;
  aQStack_14[0]._0_8_ = uVar12;
  aQStack_14[0]._8_8_ = uVar13;
  pLVar2 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_6,&VStack_3,aQStack_14,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar2;
}


/* MvCharacterController+NoCollisionData HandleNoCollision(Vector3, Vector3, Boolean) */

MvCharacterController_NoCollisionData *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_HandleNoCollision
          (MvCharacterController_NoCollisionData *__return_storage_ptr__,MvCharacterController *this
          ,Vector3 *ePos,Vector3 *eVel,bool adjustVerticalOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MvCharacterController;
  uVar2._0_4_ = eVel->x * (this->fields).elipsoidRadius.x;
  uVar3._0_4_ = (this->fields).elipsoidRadius.y * eVel->y;
  VStack_4.interactionFlags = 0;
  fVar5 = ePos->x * (this->fields).elipsoidRadius.x;
  aVStack_6[0].interactionFlags = 0;
  fVar7 = (this->fields).elipsoidRadius.y * ePos->y;
  fVar8 = (this->fields).elipsoidRadius.z * ePos->z;
  uVar2._4_4_ = (this->fields).elipsoidRadius.z * eVel->z;
  VStack_4.point.x = 0.0;
  VStack_4.point.y = 0.0;
  VStack_4.point.z = 0.0;
  VStack_4.normal.x = 0.0;
  VStack_4.normal.y = 0.0;
  VStack_4.normal.z = 0.0;
  VStack_4.cubePos.x = 0;
  VStack_4.cubePos.y = 0;
  VStack_4.cubePos.z = 0;
  VStack_4._30_2_ = 0;
  VStack_4.face = 0;
  VStack_4.isCubeHit = 0;
  VStack_4._37_3_ = 0;
  VStack_4.woId = 0;
  VStack_4._44_4_ = 0;
  VStack_4.cube = (Cube *)0x0;
  VStack_4.distance = 0.0;
  VStack_4._60_4_ = 0;
  VStack_4.collider = (Collider *)0x0;
  VStack_4.transform = (Transform *)0x0;
  aVStack_6[0].point.x = 0.0;
  aVStack_6[0].point.y = 0.0;
  aVStack_6[0].point.z = 0.0;
  aVStack_6[0].normal.x = 0.0;
  aVStack_6[0].normal.y = 0.0;
  aVStack_6[0].normal.z = 0.0;
  aVStack_6[0].cubePos.x = 0;
  aVStack_6[0].cubePos.y = 0;
  aVStack_6[0].cubePos.z = 0;
  aVStack_6[0]._30_2_ = 0;
  aVStack_6[0].face = 0;
  aVStack_6[0].isCubeHit = 0;
  aVStack_6[0]._37_3_ = 0;
  aVStack_6[0].woId = 0;
  aVStack_6[0]._44_4_ = 0;
  aVStack_6[0].cube = (Cube *)0x0;
  aVStack_6[0].distance = 0.0;
  aVStack_6[0]._60_4_ = 0;
  aVStack_6[0].collider = (Collider *)0x0;
  aVStack_6[0].transform = (Transform *)0x0;
  auStack_9._12_4_ = (float)uVar3;
  auStack_9._8_4_ = (float)uVar2;
  (__return_storage_ptr__->position).x = 0.0;
  (__return_storage_ptr__->position).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->position).z = 0;
  fStack_10 = uVar2._4_4_;
  if (*(int *)&(pMVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_11.y = (float)uVar3;
  QStack_11.x = (float)uVar2;
  QStack_11.z = uVar2._4_4_;
  pVVar12 = MvCharacterController_GetNormalizedVector
                      ((Vector3 *)&QStack_13,(Vector3 *)&QStack_11,(MethodInfo *)0x0);
  QStack_11.x = pVVar12->x;
  QStack_11.y = pVVar12->y;
  fVar14 = pVVar12->z;
  VStack_15.z = eVel->z;
  VStack_15.x = eVel->x;
  VStack_15.y = eVel->y;
  auStack_9._0_8_ = QStack_11._0_8_;
  pVVar12 = MvCharacterController_GetNormalizedVector
                      ((Vector3 *)&QStack_13,&VStack_15,(MethodInfo *)0x0);
  QStack_13.x = ePos->x;
  QStack_13.y = ePos->y;
  uVar3._4_4_ = eVel->z;
  fVar16 = ePos->z;
  VStack_17.x = pVVar12->x;
  VStack_17.y = pVVar12->y;
  fStack_18 = pVVar12->z;
  uVar19 = eVel->x;
  uVar20 = eVel->y;
  bVar21 = cRam_? == '\0';
  (__return_storage_ptr__->position).x = (float)uVar19 + QStack_13.x;
  (__return_storage_ptr__->position).y = (float)uVar20 + QStack_13.y;
  (__return_storage_ptr__->position).z = uVar3._4_4_ + fVar16;
  __return_storage_ptr__->valid = 1;
  VStack_15._0_8_ = VStack_17._0_8_;
  if (bVar21) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_13.x = (this->fields).elipsoidRadius.x;
  QStack_13.y = (this->fields).elipsoidRadius.y;
  fVar16 = (pVVar22->downVector).z;
  uVar3._4_4_ = (this->fields).elipsoidRadius.z;
  QStack_23.x = (pVVar22->downVector).x;
  QStack_23.y = (pVVar22->downVector).y;
  QStack_24._0_8_ = QStack_23._0_8_;
  QStack_24.z = fVar16;
  fVar25 = (float)FUN_?(&QStack_24);
  fVar26 = _UNK_?;
  if (_UNK_? < fVar25) {
    QStack_23.x = QStack_23.x / fVar25;
    fVar16 = fVar16 / fVar25;
    QStack_23.y = QStack_23.y / fVar25;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_23.x = (pVVar22->zeroVector).x;
    QStack_23.y = (pVVar22->zeroVector).y;
    fVar16 = (pVVar22->zeroVector).z;
  }
  QStack_24.y = QStack_23.y;
  QStack_13.z = uVar3._4_4_ * fVar16 * _UNK_?;
  QStack_13.y = QStack_13.y * QStack_24.y * _UNK_?;
  QStack_13.x = QStack_23.x * _UNK_? * QStack_13.x;
  QStack_24._0_8_ = QStack_23._0_8_;
  fStack_27 = (float)FUN_?(&QStack_13);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_13.x = (pVVar22->downVector).x;
  QStack_13.y = (pVVar22->downVector).y;
  uVar3._4_4_ = (pVVar22->downVector).z;
  QStack_13.z = uVar3._4_4_;
  QStack_23._0_8_ = QStack_13._0_8_;
  fVar16 = (float)FUN_?(&QStack_13);
  if (fVar26 < fVar16) {
    QStack_24.x = QStack_23.x / fVar16;
    uVar3._4_4_ = uVar3._4_4_ / fVar16;
    QStack_24.y = QStack_23.y / fVar16;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_24.x = (pVVar22->zeroVector).x;
    QStack_24.y = (pVVar22->zeroVector).y;
    uVar3._4_4_ = (pVVar22->zeroVector).z;
  }
  fVar25 = QStack_24.x;
  pHVar28 = (this->fields).IgnoreWoIds;
  uVar29._0_4_ = (this->fields).elipsoidRadius.x;
  uVar29._4_4_ = (this->fields).elipsoidRadius.y;
  fVar16 = (this->fields).elipsoidRadius.z;
  iVar30 = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_31.m_Origin.y = fVar7 + (float)uVar3;
  RStack_31.m_Origin.x = (float)uVar2 + fVar5;
  RStack_31.m_Direction.x = fVar25;
  RStack_31.m_Origin.z = fVar8 + uVar2._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar32 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar33._0_4_ = (pQVar32->identityQuaternion).x;
  uVar33._4_4_ = (pQVar32->identityQuaternion).y;
  uVar34._0_4_ = (pQVar32->identityQuaternion).z;
  uVar34._4_4_ = (pQVar32->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar25 = fStack_27;
  QStack_24.z = eVel->z;
  uVar35._0_4_ = eVel->x;
  uVar35._4_4_ = eVel->y;
  RStack_31.m_Direction.z = uVar3._4_4_;
  RStack_31.m_Direction.y = QStack_24.y;
  QStack_13._0_8_ = uVar29;
  QStack_13.z = fVar16;
  QStack_23._0_8_ = uVar33;
  QStack_23._8_8_ = uVar34;
  QStack_24._0_8_ = uVar35;
  bVar36 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                     (&RStack_31,(Vector3 *)&QStack_13,&QStack_23,fStack_27,&VStack_4,pHVar28,
                      iVar30,(MethodInfo *)0x0);
  if (bVar36 == 0) {
    uVar2._0_4_ = VStack_17.x;
    uVar2._4_4_ = VStack_17.y;
    uVar3._0_4_ = (float)auStack_9._0_8_;
    uVar3._4_4_ = SUB84(auStack_9._0_8_,4);
    fVar16 = fStack_18;
  }
  else {
    uVar3._4_4_ = VStack_4.distance;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_17.x = (this->fields).elipsoidRadius.x;
    VStack_17.y = (this->fields).elipsoidRadius.y;
    fVar16 = (this->fields).elipsoidRadius.z;
    pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar37._0_4_ = (pVVar22->downVector).x;
    uVar37._4_4_ = (pVVar22->downVector).y;
    fVar14 = (pVVar22->downVector).z;
    QStack_23._0_8_ = uVar37;
    if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
      FUN_?();
    }
    QStack_13._0_8_ = uVar37;
    QStack_13.z = fVar14;
    fVar38 = (float)FUN_?(&QStack_13);
    if (fVar26 < fVar38) {
      QStack_23.x = QStack_23.x / fVar38;
      fVar14 = fVar14 / fVar38;
      QStack_23.y = QStack_23.y / fVar38;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_23.x = (pVVar22->zeroVector).x;
      QStack_23.y = (pVVar22->zeroVector).y;
      fVar14 = (pVVar22->zeroVector).z;
    }
    QStack_13.x = QStack_23.x;
    QStack_13.z = (fVar14 * uVar3._4_4_) / fVar16;
    QStack_13.y = (QStack_23.y * uVar3._4_4_) / VStack_17.y;
    QStack_13.x = (QStack_13.x * uVar3._4_4_) / VStack_17.x;
    uVar3._4_4_ = (float)FUN_?(&QStack_13);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    QStack_13.x = (pVVar22->upVector).x;
    QStack_13.y = (pVVar22->upVector).y;
    fVar16 = (pVVar22->upVector).z;
    QStack_13.z = fVar16;
    QStack_23._0_8_ = QStack_13._0_8_;
    fVar14 = (float)FUN_?(&QStack_13);
    if (fVar26 < fVar14) {
      VStack_17.x = QStack_23.x / fVar14;
      fVar16 = fVar16 / fVar14;
      VStack_17.y = QStack_23.y / fVar14;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_17.x = (pVVar22->zeroVector).x;
      VStack_17.y = (pVVar22->zeroVector).y;
      fVar16 = (pVVar22->zeroVector).z;
    }
    fVar38 = VStack_17.x;
    pHVar28 = (this->fields).IgnoreWoIds;
    uVar39._0_4_ = (this->fields).elipsoidRadius.x;
    uVar39._4_4_ = (this->fields).elipsoidRadius.y;
    fVar14 = (this->fields).elipsoidRadius.z;
    iVar30 = TypeInfo__MvCharacterController->static_fields->layerMask;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVSweptElipsoidCheck);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_31.m_Origin.y = fVar7 + (float)uVar3;
    RStack_31.m_Origin.x = (float)uVar2 + fVar5;
    RStack_31.m_Direction.x = fVar38;
    RStack_31.m_Origin.z = fVar8 + uVar2._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar32 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar40._0_4_ = (pQVar32->identityQuaternion).x;
    uVar40._4_4_ = (pQVar32->identityQuaternion).y;
    uVar41._0_4_ = (pQVar32->identityQuaternion).z;
    uVar41._4_4_ = (pQVar32->identityQuaternion).w;
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_31.m_Direction.z = fVar16;
    RStack_31.m_Direction.y = VStack_17.y;
    QStack_13._0_8_ = uVar39;
    QStack_13.z = fVar14;
    QStack_23._0_8_ = uVar40;
    QStack_23._8_8_ = uVar41;
    bVar36 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                       (&RStack_31,(Vector3 *)&QStack_13,&QStack_23,fVar25,&VStack_4,pHVar28,
                        iVar30,(MethodInfo *)0x0);
    uVar42 = eVel->x;
    uVar43 = eVel->y;
    QStack_13.x = ePos->x;
    QStack_13.y = ePos->y;
    uVar2._0_4_ = eVel->z;
    fVar16 = (float)uVar42 + QStack_13.x;
    uVar2._4_4_ = (float)uVar43 + QStack_13.y;
    uVar3._0_4_ = ePos->z;
    if (bVar36 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      __return_storage_ptr__->valid = 1;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      __return_storage_ptr__->valid = 0;
    }
    uVar3._4_4_ = _UNK_? - uVar3._4_4_;
    pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar44 = (pVVar22->upVector).x;
    uVar45 = (pVVar22->upVector).y;
    fVar14 = (pVVar22->upVector).z;
    (__return_storage_ptr__->position).x = uVar3._4_4_ * (float)uVar44 + fVar16;
    (__return_storage_ptr__->position).y = uVar3._4_4_ * (float)uVar45 + uVar2._4_4_;
    (__return_storage_ptr__->position).z = uVar3._4_4_ * fVar14 + (float)uVar2 + (float)uVar3;
    uVar46 = (__return_storage_ptr__->position).x;
    uVar47 = (__return_storage_ptr__->position).y;
    QStack_13.x = ePos->x;
    QStack_13.y = ePos->y;
    uVar3._4_4_ = (float)uVar46 - QStack_13.x;
    uVar2._0_4_ = (__return_storage_ptr__->position).z - ePos->z;
    uVar3._0_4_ = (float)uVar47 - QStack_13.y;
    QStack_24.y = (float)uVar3;
    QStack_24.x = uVar3._4_4_;
    QStack_24.z = (float)uVar2;
    if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
      FUN_?();
    }
    QStack_13.y = (float)uVar3;
    QStack_13.x = uVar3._4_4_;
    QStack_13.z = (float)uVar2;
    pVVar12 = MvCharacterController_GetNormalizedVector
                        ((Vector3 *)&QStack_23,(Vector3 *)&QStack_13,(MethodInfo *)0x0);
    QStack_13.z = (float)uVar2 * (this->fields).elipsoidRadius.z;
    fVar16 = pVVar12->z;
    uVar2._0_4_ = pVVar12->x;
    uVar2._4_4_ = pVVar12->y;
    QStack_13.y = (float)uVar3 * (this->fields).elipsoidRadius.y;
    QStack_13.x = uVar3._4_4_ * (this->fields).elipsoidRadius.x;
    VStack_15._0_8_ = uVar2;
    auStack_9._8_8_ = QStack_13._0_8_;
    fStack_10 = QStack_13.z;
    pVVar12 = MvCharacterController_GetNormalizedVector
                        ((Vector3 *)&QStack_23,(Vector3 *)&QStack_13,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar12->x;
    uVar3._4_4_ = pVVar12->y;
    fVar14 = pVVar12->z;
    QStack_11._0_8_ = uVar3;
    auStack_9._0_8_ = uVar3;
  }
  if (adjustVerticalOnly == 0) {
    QStack_23.x = (this->fields).elipsoidRadius.x;
    QStack_23.y = (this->fields).elipsoidRadius.y;
    fVar25 = (this->fields).elipsoidRadius.z;
    if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
      FUN_?();
    }
    QStack_13.y = uVar2._4_4_;
    QStack_13.x = (float)uVar2;
    QStack_13.z = fVar16;
    fVar38 = (float)FUN_?(&QStack_13);
    uVar2._4_4_ = VStack_15.y;
    uVar2._0_4_ = VStack_15.x;
    if (fVar26 < fVar38) {
      VStack_15.x = VStack_15.x / fVar38;
      fVar48 = fVar16 / fVar38;
      VStack_15.y = VStack_15.y / fVar38;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_15.x = (pVVar22->zeroVector).x;
      VStack_15.y = (pVVar22->zeroVector).y;
      fVar48 = (pVVar22->zeroVector).z;
    }
    QStack_13.x = VStack_15.x;
    QStack_13.z = fVar48 * _UNK_? * fVar25;
    QStack_13.y = VStack_15.y * _UNK_? * QStack_23.y;
    QStack_13.x = QStack_13.x * _UNK_? * QStack_23.x;
    fVar25 = (float)FUN_?(&QStack_13);
    QStack_13.y = uVar3._4_4_;
    QStack_13.x = (float)uVar3;
    QStack_13.z = fVar14;
    fVar38 = (float)FUN_?(&QStack_13);
    uVar3._4_4_ = QStack_11.y;
    uVar3._0_4_ = QStack_11.x;
    if (fVar26 < fVar38) {
      QStack_11.x = QStack_11.x / fVar38;
      fVar48 = fVar14 / fVar38;
      QStack_11.y = QStack_11.y / fVar38;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_11.x = (pVVar22->zeroVector).x;
      QStack_11.y = (pVVar22->zeroVector).y;
      fVar48 = (pVVar22->zeroVector).z;
    }
    fVar49 = QStack_11.x;
    uVar50._0_4_ = (this->fields).elipsoidRadius.x;
    uVar50._4_4_ = (this->fields).elipsoidRadius.y;
    fVar38 = (this->fields).elipsoidRadius.z;
    fVar51 = (float)FUN_?(auStack_9 + 8);
    pHVar28 = (this->fields).IgnoreWoIds;
    iVar30 = TypeInfo__MvCharacterController->static_fields->layerMask;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVSweptElipsoidCheck);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_31.m_Origin.y = fVar7;
    RStack_31.m_Origin.x = fVar5;
    RStack_31.m_Direction.x = fVar49;
    RStack_31.m_Origin.z = fVar8;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar32 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar52._0_4_ = (pQVar32->identityQuaternion).x;
    uVar52._4_4_ = (pQVar32->identityQuaternion).y;
    uVar53._0_4_ = (pQVar32->identityQuaternion).z;
    uVar53._4_4_ = (pQVar32->identityQuaternion).w;
    if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_31.m_Direction.z = fVar48;
    RStack_31.m_Direction.y = QStack_11.y;
    QStack_13._0_8_ = uVar50;
    QStack_13.z = fVar38;
    QStack_23._0_8_ = uVar52;
    QStack_23._8_8_ = uVar53;
    bVar36 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                       (&RStack_31,(Vector3 *)&QStack_13,&QStack_23,fVar51 + fVar25,aVStack_6,
                        pHVar28,iVar30,(MethodInfo *)0x0);
    if (bVar36 != 0) {
      QStack_23.x = (this->fields).elipsoidRadius.x;
      QStack_23.y = (this->fields).elipsoidRadius.y;
      fVar7 = aVStack_6[0].distance;
      fVar5 = (this->fields).elipsoidRadius.z;
      if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
        FUN_?();
      }
      QStack_13.x = (float)auStack_9._0_4_;
      QStack_13.y = (float)auStack_9._4_4_;
      QStack_13.z = fVar14;
      fVar8 = (float)FUN_?(&QStack_13);
      if (fVar26 < fVar8) {
        fVar14 = fVar14 / fVar8;
        QStack_11.y = uVar3._4_4_ / fVar8;
        QStack_11.x = (float)uVar3 / fVar8;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
        QStack_11.x = (pVVar22->zeroVector).x;
        QStack_11.y = (pVVar22->zeroVector).y;
        fVar14 = (pVVar22->zeroVector).z;
      }
      QStack_13.x = QStack_11.x;
      QStack_13.z = (fVar14 * fVar7) / fVar5;
      QStack_13.y = (QStack_11.y * fVar7) / QStack_23.y;
      QStack_13.x = (QStack_13.x * fVar7) / QStack_23.x;
      uVar3._0_4_ = (float)FUN_?(&QStack_13);
      fVar5 = (float)FUN_?(&QStack_24);
      fVar5 = fVar5 + _UNK_?;
      fVar7 = (float)FUN_?(&QStack_24);
      fVar7 = fVar7 - (fVar5 - (float)uVar3);
      uVar54 = ePos->x;
      uVar55 = ePos->y;
      uVar3._0_4_ = ePos->z;
      (__return_storage_ptr__->position).x = (float)uVar2 * fVar7 + (float)uVar54;
      (__return_storage_ptr__->position).y = uVar2._4_4_ * fVar7 + (float)uVar55;
      (__return_storage_ptr__->position).z = fVar16 * fVar7 + (float)uVar3;
      __return_storage_ptr__->valid = 1;
    }
  }
  return __return_storage_ptr__;
}


/* Void Init(Single, Single, Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Init
               (MvCharacterController *this,float radius,float height,Vector3 *center,
               MethodInfo *method)

{
  fVar1 = center->y;
  fVar2 = height * _UNK_?;
  fVar3 = center->z;
  fVar4 = center->y;
  (this->fields).center.x = center->x;
  (this->fields).center.y = fVar1;
  fVar1 = center->z;
  (this->fields).elipsoidRadius.x = radius;
  (this->fields).elipsoidRadius.y = fVar2;
  (this->fields).centerBase.x = center->x;
  (this->fields).centerBase.y = fVar4;
  (this->fields).centerBase.z = fVar1;
  (this->fields).elipsoidRadius.z = radius;
  (this->fields).center.z = fVar3;
  fVar4 = (this->fields).elipsoidRadius.y;
  (this->fields).radiusBase.x = (this->fields).elipsoidRadius.x;
  (this->fields).radiusBase.y = fVar4;
  (this->fields).radiusBase.z = radius;
  return;
}


/* Void Move(Vector3, Boolean) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Move
               (MvCharacterController *this,Vector3 *motion,bool sendCollisionData,
               MethodInfo *method)

{
  fStack_1 = motion->z;
  uStack_2._0_4_ = motion->x;
  uStack_2._4_4_ = motion->y;
  (this->fields).sendCollisionData = sendCollisionData;
  (*(this->klass->vtable).__unknown_1.methodPtr)
            (uStack_2,&uStack_2,(this->klass->vtable).__unknown_1.method);
  (this->fields).sendCollisionData = 1;
  return;
}


/* Boolean OverlapCheckCollision(Vector3) */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlapCheckCollision
               (MvCharacterController *this,Vector3 *R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).elipsoidRadius.x;
  uVar1._4_4_ = (this->fields).elipsoidRadius.y;
  fVar2 = (this->fields).elipsoidRadius.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar4._0_4_ = (pQVar3->identityQuaternion).x;
  uVar4._4_4_ = (pQVar3->identityQuaternion).y;
  uVar5._0_4_ = (pQVar3->identityQuaternion).z;
  uVar5._4_4_ = (pQVar3->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_6.x = R3Position->x;
  VStack_6.y = R3Position->y;
  VStack_6.z = R3Position->z;
  VStack_7._0_8_ = uVar1;
  VStack_7.z = fVar2;
  aQStack_8[0]._0_8_ = uVar4;
  aQStack_8[0]._8_8_ = uVar5;
  bVar9 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                    (&VStack_7,&VStack_6,aQStack_8,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return bVar9 != 0;
}


/* List`1[MVOverlapResult] OverlappingObjects(Vector3) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlappingObjects
          (MvCharacterController *this,Vector3 *R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).elipsoidRadius.x;
  uVar1._4_4_ = (this->fields).elipsoidRadius.y;
  fVar2 = (this->fields).elipsoidRadius.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar4._0_4_ = (pQVar3->identityQuaternion).x;
  uVar4._4_4_ = (pQVar3->identityQuaternion).y;
  uVar5._0_4_ = (pQVar3->identityQuaternion).z;
  uVar5._4_4_ = (pQVar3->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_6.x = R3Position->x;
  VStack_6.y = R3Position->y;
  VStack_6.z = R3Position->z;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  VStack_7._0_8_ = uVar1;
  VStack_7.z = fVar2;
  aQStack_8[0]._0_8_ = uVar4;
  aQStack_8[0]._8_8_ = uVar5;
  pLVar9 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_7,&VStack_6,aQStack_8,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar9;
}


/* Void SendCharacterCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SendCharacterCollision
               (MvCharacterController *this,MVControllerColliderHit *controllerColliderHit,
               MethodInfo *method)

{
  if ((this->fields).sendCollisionData != 0) {
    pAVar1 = (this->fields).OnControllerColliderHit;
    if (pAVar1 == (Action_1_MVControllerColliderHit_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_3._0_4_ = (controllerColliderHit->positionTouchingHit).x;
    uStack_3._4_4_ = (controllerColliderHit->positionTouchingHit).y;
    uStack_4 = *(undefined8 *)&(controllerColliderHit->positionTouchingHit).z;
    uStack_5 = *(undefined8 *)&controllerColliderHit->testWithOutMoving;
    uStack_6._0_4_ = (controllerColliderHit->moveDirection).y;
    uStack_6._4_4_ = (controllerColliderHit->moveDirection).z;
    uStack_7._0_4_ = (controllerColliderHit->elipsoidNormal).x;
    uStack_7._4_4_ = (controllerColliderHit->elipsoidNormal).y;
    uStack_8 = *(undefined8 *)&(controllerColliderHit->elipsoidNormal).z;
    uStack_9._0_4_ = (controllerColliderHit->slopeNormal).y;
    uStack_9._4_4_ = (controllerColliderHit->slopeNormal).z;
    uStack_10._0_4_ = (controllerColliderHit->impactVelocity).x;
    uStack_10._4_4_ = (controllerColliderHit->impactVelocity).y;
    uStack_11 = *(undefined8 *)&(controllerColliderHit->impactVelocity).z;
    uStack_12._0_4_ = (controllerColliderHit->hit).point.x;
    uStack_12._4_4_ = (controllerColliderHit->hit).point.y;
    uStack_13 = *(undefined8 *)&(controllerColliderHit->hit).point.z;
    uStack_14._0_4_ = (controllerColliderHit->hit).normal.y;
    uStack_14._4_4_ = (controllerColliderHit->hit).normal.z;
    uStack_15 = *(undefined8 *)&(controllerColliderHit->hit).cubePos;
    uStack_16._0_4_ = (controllerColliderHit->hit).face;
    uStack_16._4_1_ = (controllerColliderHit->hit).isCubeHit;
    uStack_16._5_3_ = *(undefined3 *)&(controllerColliderHit->hit).field_0x25;
    uStack_17 = *(undefined8 *)&(controllerColliderHit->hit).woId;
    uStack_18 = *(undefined4 *)&(controllerColliderHit->hit).collider;
    uStack_19 = *(undefined4 *)((longlong)&(controllerColliderHit->hit).collider + 4);
    uStack_20 = *(undefined4 *)&(controllerColliderHit->hit).transform;
    uStack_21 = *(undefined4 *)((longlong)&(controllerColliderHit->hit).transform + 4);
    pCStack_22 = (controllerColliderHit->hit).cube;
    uStack_23 = *(undefined8 *)&(controllerColliderHit->hit).distance;
    uStack_24 = (undefined4)(controllerColliderHit->hit).interactionFlags;
    uStack_25 = *(undefined4 *)((longlong)&(controllerColliderHit->hit).interactionFlags + 4);
    uStack_26 = *(undefined4 *)&controllerColliderHit->material;
    uStack_27 = *(undefined4 *)((longlong)&controllerColliderHit->material + 4);
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&uStack_3,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SetScale
               (MvCharacterController *this,float scale,MethodInfo *method)

{
  uVar1 = (this->fields).centerBase.x;
  fVar2 = (this->fields).centerBase.y;
  fVar3 = (this->fields).centerBase.z;
  (this->fields).center.x = (float)uVar1 * scale;
  (this->fields).center.y = fVar2 * scale;
  (this->fields).center.z = fVar3 * scale;
  fVar2 = (this->fields).radiusBase.y;
  fVar3 = (this->fields).radiusBase.z;
  fVar4 = (this->fields).offsetBase;
  (this->fields).elipsoidRadius.x = scale * (this->fields).radiusBase.x;
  (this->fields).elipsoidRadius.y = scale * fVar2;
  (this->fields).elipsoidRadius.z = scale * fVar3;
  (this->fields).offsetFactor = scale * fVar4;
  return;
}


/* Boolean TestWithOutSliding(Single, Vector3, Vector3, MVControllerColliderHit ByRef) */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_TestWithOutSliding
               (MvCharacterController *this,float distance,Vector3 *direction,Vector3 *motion,
               MVControllerColliderHit *colliderHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  iStack_1 = 0;
  auStack_2._0_4_ = 0.0;
  auStack_2._4_4_ = 0.0;
  auStack_2._8_4_ = 0.0;
  auStack_2._12_4_ = 0.0;
  auStack_2._16_4_ = 0.0;
  auStack_2._20_4_ = 0.0;
  auStack_2._24_4_ = 0.0;
  auStack_2._28_4_ = 0.0;
  uStack_3._0_4_ = 0.0;
  uStack_3._4_4_ = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  pCStack_5 = (Cube *)0x0;
  uStack_6._0_4_ = 0.0;
  uStack_6._4_4_ = 0;
  pCStack_7 = (Collider *)0x0;
  pTStack_8 = (Transform *)0x0;
  FUN_?(colliderHit,0,0xa8);
  fVar9 = (this->fields).elipsoidRadius.y - (this->fields).offsetFactor;
  fVar10 = (this->fields).elipsoidRadius.x;
  fVar11 = (this->fields).elipsoidRadius.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(direction,method_00);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_14.x = 0.0;
  VStack_14.y = 0.0;
  VStack_14.z = 0.0;
  pvVar15 = (obj->fields)._._.m_CachedPtr;
  if (pvVar15 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(pvVar15,&VStack_14);
  QStack_17.x = (this->fields).center.x;
  QStack_17.y = (this->fields).center.y;
  fVar18 = VStack_14.x + QStack_17.x;
  fVar19 = VStack_14.z + (this->fields).center.z;
  fVar20 = VStack_14.y + QStack_17.y;
  VStack_14.x = direction->x;
  VStack_14.y = direction->y;
  VStack_14.z = direction->z;
  fVar21 = (float)FUN_?(&VStack_14);
  if (_UNK_? < fVar21) {
    QStack_17.x = direction->x;
    QStack_17.y = direction->y;
    fVar22 = direction->z / fVar21;
    VStack_14.y = QStack_17.y / fVar21;
    VStack_14.x = QStack_17.x / fVar21;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_14.x = (pVVar23->zeroVector).x;
    VStack_14.y = (pVVar23->zeroVector).y;
    fVar22 = (pVVar23->zeroVector).z;
  }
  fVar24 = VStack_14.x;
  fVar21 = (this->fields).offsetFactor;
  ignoreWoIds = (this->fields).IgnoreWoIds;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSweptElipsoidCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_25.m_Origin.y = fVar20;
  RStack_25.m_Origin.x = fVar18;
  RStack_25.m_Direction.x = fVar24;
  RStack_25.m_Origin.z = fVar19;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar26 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar16._0_4_ = (pQVar26->identityQuaternion).x;
  uVar16._4_4_ = (pQVar26->identityQuaternion).y;
  uVar27._0_4_ = (pQVar26->identityQuaternion).z;
  uVar27._4_4_ = (pQVar26->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MVSweptElipsoidCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_28.y = fVar9;
  VStack_28.x = fVar10;
  RStack_25.m_Direction.z = fVar22;
  RStack_25.m_Direction.y = VStack_14.y;
  VStack_28.z = fVar11;
  QStack_17._0_8_ = uVar16;
  QStack_17._8_8_ = uVar27;
  bVar29 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                     (&RStack_25,&VStack_28,&QStack_17,fVar21 + distance,(VoxelHit *)auStack_2,
                      ignoreWoIds,layerMask,(MethodInfo *)0x0);
  bVar13 = 0;
  if (bVar29 != 0) {
    FUN_?(aMStack_30,0,0xa8);
    VStack_28.x = motion->x;
    VStack_28.y = motion->y;
    VStack_28.z = motion->z;
    auStack_31._16_8_ = auStack_2._16_8_;
    auStack_31._24_8_ = auStack_2._24_8_;
    VStack_14.y = fVar9;
    VStack_14.x = fVar10;
    QStack_17.y = fVar20;
    QStack_17.x = fVar18;
    auStack_31._0_8_ = auStack_2._0_8_;
    auStack_31._8_8_ = auStack_2._8_8_;
    auStack_31._32_4_ = (float)uStack_3;
    auStack_31._36_4_ = uStack_3._4_4_;
    auStack_31._40_4_ = (float)uStack_4;
    auStack_31._44_4_ = uStack_4._4_4_;
    auStack_31._48_8_ = pCStack_5;
    auStack_31._56_8_ = uStack_6;
    pCStack_32 = pCStack_7;
    pTStack_33 = pTStack_8;
    QStack_17.z = fVar19;
    iStack_34 = iStack_1;
    VStack_14.z = fVar11;
    MVControllerColliderHit::MVControllerColliderHit__ctor
              (aMStack_30,(VoxelHit *)auStack_31,(Vector3 *)&QStack_17,&VStack_14,&VStack_28,1,
               (MethodInfo *)0x0);
    bVar35 = iRam_? != 0;
    (colliderHit->positionTouchingHit).x = aMStack_30[0].positionTouchingHit.x;
    (colliderHit->positionTouchingHit).y = aMStack_30[0].positionTouchingHit.y;
    *(undefined8 *)&(colliderHit->positionTouchingHit).z = aMStack_30[0]._8_8_;
    (colliderHit->moveDirection).y = aMStack_30[0].moveDirection.y;
    (colliderHit->moveDirection).z = aMStack_30[0].moveDirection.z;
    (colliderHit->elipsoidNormal).x = aMStack_30[0].elipsoidNormal.x;
    (colliderHit->elipsoidNormal).y = aMStack_30[0].elipsoidNormal.y;
    *(undefined8 *)&(colliderHit->elipsoidNormal).z = aMStack_30[0]._32_8_;
    (colliderHit->slopeNormal).y = aMStack_30[0].slopeNormal.y;
    (colliderHit->slopeNormal).z = aMStack_30[0].slopeNormal.z;
    (colliderHit->impactVelocity).x = aMStack_30[0].impactVelocity.x;
    (colliderHit->impactVelocity).y = aMStack_30[0].impactVelocity.y;
    *(undefined8 *)&(colliderHit->impactVelocity).z = aMStack_30[0]._56_8_;
    (colliderHit->hit).point.x = aMStack_30[0].hit.point.x;
    (colliderHit->hit).point.y = aMStack_30[0].hit.point.y;
    *(undefined8 *)&(colliderHit->hit).point.z = aMStack_30[0].hit._8_8_;
    (colliderHit->hit).normal.y = aMStack_30[0].hit.normal.y;
    (colliderHit->hit).normal.z = aMStack_30[0].hit.normal.z;
    (colliderHit->hit).cubePos = aMStack_30[0].hit.cubePos;
    *(undefined2 *)&(colliderHit->hit).field_0x1e = aMStack_30[0].hit._30_2_;
    (colliderHit->hit).face = aMStack_30[0].hit.face;
    (colliderHit->hit).isCubeHit = aMStack_30[0].hit.isCubeHit;
    *(undefined3 *)&(colliderHit->hit).field_0x25 = aMStack_30[0].hit._37_3_;
    (colliderHit->hit).woId = aMStack_30[0].hit.woId;
    *(undefined4 *)&(colliderHit->hit).field_0x2c = aMStack_30[0].hit._44_4_;
    (colliderHit->hit).cube = aMStack_30[0].hit.cube;
    (colliderHit->hit).distance = aMStack_30[0].hit.distance;
    *(undefined4 *)&(colliderHit->hit).field_0x3c = aMStack_30[0].hit._60_4_;
    (colliderHit->hit).collider = aMStack_30[0].hit.collider;
    (colliderHit->hit).transform = aMStack_30[0].hit.transform;
    (colliderHit->hit).interactionFlags = aMStack_30[0].hit.interactionFlags;
    colliderHit->material = aMStack_30[0].material;
    colliderHit->testWithOutMoving = aMStack_30[0].testWithOutMoving;
    *(undefined7 *)&colliderHit->field_0xa1 = aMStack_30[0]._161_7_;
    if (bVar35) {
      uVar36 = (uint)((ulonglong)&(colliderHit->hit).cube >> 0xc);
      uVar37 = (ulonglong)((uVar36 & 0x1fffff) >> 6);
      do {
        uVar38 = *(ulonglong *)(uVar37 * 8 + 0xADDR);
        puVar39 = (ulonglong *)(uVar37 * 8 + 0xADDR);
        LOCK();
        bVar35 = uVar38 == *puVar39;
        if (bVar35) {
          *puVar39 = uVar38 | 1L << (uVar36 & 0x3f);
        }
        UNLOCK();
      } while (!bVar35);
    }
    auStack_31._0_4_ = (colliderHit->positionTouchingHit).x;
    auStack_31._4_4_ = (colliderHit->positionTouchingHit).y;
    auStack_31._8_8_ = *(undefined8 *)&(colliderHit->positionTouchingHit).z;
    uStack_40._0_1_ = colliderHit->testWithOutMoving;
    uStack_40._1_7_ = *(undefined7 *)&colliderHit->field_0xa1;
    auStack_31._16_4_ = (colliderHit->moveDirection).y;
    auStack_31._20_4_ = (colliderHit->moveDirection).z;
    auStack_31._24_4_ = (colliderHit->elipsoidNormal).x;
    auStack_31._28_4_ = (colliderHit->elipsoidNormal).y;
    auStack_31._32_8_ = *(undefined8 *)&(colliderHit->elipsoidNormal).z;
    auStack_31._40_4_ = (colliderHit->slopeNormal).y;
    auStack_31._44_4_ = (colliderHit->slopeNormal).z;
    auStack_31._48_8_ = *(undefined8 *)&colliderHit->impactVelocity;
    auStack_31._56_8_ = *(undefined8 *)&(colliderHit->impactVelocity).z;
    pCStack_32 = *(Collider **)&(colliderHit->hit).point;
    pTStack_33 = *(Transform **)&(colliderHit->hit).point.z;
    iStack_34._0_4_ = (colliderHit->hit).normal.y;
    iStack_34._4_4_ = (colliderHit->hit).normal.z;
    uStack_41._0_6_ = (colliderHit->hit).cubePos;
    uStack_41._6_2_ = *(undefined2 *)&(colliderHit->hit).field_0x1e;
    uStack_42._0_4_ = (colliderHit->hit).face;
    uStack_42._4_1_ = (colliderHit->hit).isCubeHit;
    uStack_42._5_3_ = *(undefined3 *)&(colliderHit->hit).field_0x25;
    uStack_43._0_4_ = (colliderHit->hit).woId;
    uStack_43._4_4_ = *(undefined4 *)&(colliderHit->hit).field_0x2c;
    pCStack_44 = (colliderHit->hit).cube;
    uStack_45._0_4_ = (colliderHit->hit).distance;
    uStack_45._4_4_ = *(undefined4 *)&(colliderHit->hit).field_0x3c;
    pCStack_46 = (colliderHit->hit).collider;
    pTStack_47 = (colliderHit->hit).transform;
    iStack_48 = (colliderHit->hit).interactionFlags;
    pMStack_49 = colliderHit->material;
    MvCharacterController_SendCharacterCollision
              (this,(MVControllerColliderHit *)auStack_31,(MethodInfo *)0x0);
    bVar13 = 1;
  }
  return bVar13;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MvCharacterController->static_fields->layerMask = -1;
  return;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__ctor
               (MvCharacterController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).sendCollisionData = 1;
  (this->fields).offsetFactor = 0.1;
  (this->fields).offsetBase = 0.1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Single get_Height() */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_Height
                (MvCharacterController *this,MethodInfo *method)

{
  fVar1 = (this->fields).elipsoidRadius.y;
  return fVar1 + fVar1;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_Velocity
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,MethodInfo *method)

{
  fVar1 = (this->fields)._Velocity_k__BackingField.z;
  fVar2 = (this->fields)._Velocity_k__BackingField.y;
  __return_storage_ptr__->x = (this->fields)._Velocity_k__BackingField.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_Velocity(Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_set_Velocity
               (MvCharacterController *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._Velocity_k__BackingField.x = value->x;
  (this->fields)._Velocity_k__BackingField.y = fVar1;
  (this->fields)._Velocity_k__BackingField.z = fVar2;
  return;
}

