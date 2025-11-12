
/* Void CalculateWorldPoints(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CalculateWorldPoints
               (CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    pPVar1 = (this->fields)._worldPlanes;
    if (pPVar1 == (Plane__Array *)0x0) goto code_?;
    if ((uint)pPVar1->max_length < 6) goto code_?;
    fVar2 = pPVar1->vector[5].m_Normal.x;
    fVar3 = pPVar1->vector[5].m_Normal.y;
    fVar4 = pPVar1->vector[5].m_Normal.z;
    fVar5 = pPVar1->vector[5].m_Distance;
    if (this_00 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_6.x = 0.0;
    VStack_6.y = 0.0;
    VStack_6.z = 0.0;
    pvVar7 = (this_00->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&VStack_6);
    fVar10 = VStack_6.z;
    uVar11 = _UNK_?;
    fVar12 = (float)((uint)fVar3 ^ _UNK_?);
    fVar13 = (float)((uint)fVar4 ^ _UNK_?);
    fVar14 = (float)((uint)fVar2 ^ _UNK_?);
    VStack_15.x = VStack_6.x;
    VStack_15.y = VStack_6.y;
    uStack_16 = CONCAT44(fVar12,fVar14);
    fStack_17 = fVar13;
    fVar18 = (float)FUN_?(&uStack_16);
    fVar19 = _UNK_?;
    if (_UNK_? < fVar18) {
      fVar13 = fVar13 / fVar18;
      VStack_20.y = fVar12 / fVar18;
      VStack_20.x = fVar14 / fVar18;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_20.x = (pVVar21->zeroVector).x;
      VStack_20.y = (pVVar21->zeroVector).y;
      fVar13 = (pVVar21->zeroVector).z;
    }
    fStack_22 = VStack_20.x;
    fStack_23 = VStack_20.y;
    fVar14 = fVar3 * fStack_23 + fVar2 * fStack_22 + fVar4 * fVar13;
    fVar18 = fVar3 * VStack_15.y;
    fVar2 = fVar2 * VStack_15.x;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar24 = _UNK_?;
    uVar25 = _UNK_?;
    uVar26 = _UNK_?;
    uVar27 = _UNK_?;
    fVar28 = _UNK_?;
    fVar12 = _UNK_?;
    auVar29._0_4_ = (float)((uint)fVar14 & _UNK_?);
    auVar29._4_4_ = (uint)fVar3 & _UNK_?;
    auVar29._8_4_ = (uint)fVar3 & _UNK_?;
    auVar29._12_4_ = (uint)fVar3 & _UNK_?;
    if (auVar29._0_4_ <= 0.0) {
      auVar30._12_4_ = 0;
      auVar30._0_12_ = auVar29._4_12_;
      auVar29 = auVar30 << 0x20;
    }
    fVar31 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar3 = auVar29._0_4_ * _UNK_?;
    if (fVar3 <= fVar31) {
      fVar3 = fVar31;
    }
    if ((fVar3 <= (float)((uint)(0.0 - fVar14) & _UNK_?)) &&
       (fVar14 = ((float)((uint)(fVar18 + fVar2 + fVar4 * fVar10) ^ uVar11) - fVar5) / fVar14,
       0.0 < fVar14)) {
      fVar2 = VStack_20.x * fVar14 + VStack_6.x;
      fVar3 = VStack_20.y * fVar14 + VStack_6.y;
      fVar4 = fVar13 * fVar14 + VStack_6.z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_16._0_4_ = (pVVar21->zeroVector).x;
      uStack_16._4_4_ = (pVVar21->zeroVector).y;
      fVar5 = (pVVar21->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
      aRStack_32[0].m_Origin.x = (pVVar21->zeroVector).x;
      aRStack_32[0].m_Origin.y = (pVVar21->zeroVector).y;
      fVar13 = (pVVar21->zeroVector).z;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      VStack_15.y = fVar3;
      VStack_15.x = fVar2;
      VStack_20.x = pVVar33->x;
      VStack_20.y = pVVar33->y;
      fVar10 = pVVar33->z;
      VStack_20.z = fVar10;
      VStack_6._0_8_ = VStack_20._0_8_;
      fVar18 = (float)FUN_?(&VStack_20);
      if (fVar19 < fVar18) {
        VStack_20.x = VStack_6.x / fVar18;
        fVar10 = fVar10 / fVar18;
        VStack_20.y = VStack_6.y / fVar18;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_20.x = (pVVar21->zeroVector).x;
        VStack_20.y = (pVVar21->zeroVector).y;
        fVar10 = (pVVar21->zeroVector).z;
      }
      pPVar1 = (this->fields)._worldPlanes;
      fStack_22 = VStack_20.x;
      fStack_23 = VStack_20.y;
      if (pPVar1 == (Plane__Array *)0x0) goto code_?;
      if ((uint)pPVar1->max_length < 4) goto code_?;
      fVar19 = pPVar1->vector[3].m_Normal.x;
      fVar18 = pPVar1->vector[3].m_Normal.y;
      fVar14 = pPVar1->vector[3].m_Normal.z;
      fVar31 = pPVar1->vector[3].m_Distance;
      fVar35 = fVar18 * fStack_23 + fVar19 * fStack_22 + fVar14 * fVar10;
      fVar36 = fVar18 * VStack_15.y;
      fVar19 = fVar19 * VStack_15.x;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Mathf);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auVar37._0_4_ = (float)((uint)fVar35 & uVar27);
      auVar37._4_4_ = (uint)fVar18 & uVar26;
      auVar37._8_4_ = (uint)fVar18 & uVar25;
      auVar37._12_4_ = (uint)fVar18 & uVar24;
      if (auVar37._0_4_ <= 0.0) {
        auVar38._12_4_ = 0;
        auVar38._0_12_ = auVar37._4_12_;
        auVar37 = auVar38 << 0x20;
      }
      fVar39 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * fVar28;
      fVar18 = auVar37._0_4_ * fVar12;
      if (fVar18 <= fVar39) {
        fVar18 = fVar39;
      }
      if ((fVar18 <= (float)((uint)(0.0 - fVar35) & uVar27)) &&
         (fVar35 = ((float)((uint)(fVar36 + fVar19 + fVar14 * fVar4) ^ uVar11) - fVar31) / fVar35,
         0.0 < fVar35)) {
        fVar5 = fVar10 * fVar35 + fVar4;
        uStack_16 = CONCAT44(VStack_20.y * fVar35 + fVar3,VStack_20.x * fVar35 + fVar2);
      }
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      VStack_15.y = fVar3;
      VStack_15.x = fVar2;
      VStack_20.x = pVVar33->x;
      VStack_20.y = pVVar33->y;
      fVar19 = pVVar33->z;
      VStack_20.z = fVar19;
      VStack_6._0_8_ = VStack_20._0_8_;
      fVar10 = (float)FUN_?(&VStack_20);
      if (_UNK_? < fVar10) {
        VStack_20.x = VStack_6.x / fVar10;
        fVar19 = fVar19 / fVar10;
        VStack_20.y = VStack_6.y / fVar10;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_20.x = (pVVar21->zeroVector).x;
        VStack_20.y = (pVVar21->zeroVector).y;
        fVar19 = (pVVar21->zeroVector).z;
      }
      pPVar1 = (this->fields)._worldPlanes;
      fStack_22 = VStack_20.x;
      fStack_23 = VStack_20.y;
      if (pPVar1 == (Plane__Array *)0x0) goto code_?;
      if ((uint)pPVar1->max_length < 2) goto code_?;
      fVar10 = pPVar1->vector[1].m_Normal.x;
      fVar18 = pPVar1->vector[1].m_Normal.y;
      fVar14 = pPVar1->vector[1].m_Normal.z;
      fVar31 = pPVar1->vector[1].m_Distance;
      fVar35 = fVar18 * fStack_23 + fVar10 * fStack_22 + fVar14 * fVar19;
      fVar36 = fVar18 * VStack_15.y;
      fVar10 = fVar10 * VStack_15.x;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Mathf);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auVar40._0_4_ = (float)((uint)fVar35 & uVar27);
      auVar40._4_4_ = (uint)fVar18 & uVar26;
      auVar40._8_4_ = (uint)fVar18 & uVar25;
      auVar40._12_4_ = (uint)fVar18 & uVar24;
      if (auVar40._0_4_ <= 0.0) {
        auVar41._12_4_ = 0;
        auVar41._0_12_ = auVar40._4_12_;
        auVar40 = auVar41 << 0x20;
      }
      fVar28 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * fVar28;
      fVar12 = auVar40._0_4_ * fVar12;
      if (fVar12 <= fVar28) {
        fVar12 = fVar28;
      }
      if ((fVar12 <= (float)((uint)(0.0 - fVar35) & uVar27)) &&
         (fVar35 = ((float)((uint)(fVar36 + fVar10 + fVar14 * fVar4) ^ uVar11) - fVar31) / fVar35,
         0.0 < fVar35)) {
        aRStack_32[0].m_Origin.x = VStack_20.x * fVar35 + fVar2;
        fVar13 = fVar19 * fVar35 + fVar4;
        aRStack_32[0].m_Origin.y = VStack_20.y * fVar35 + fVar3;
      }
      VStack_6.x = aRStack_32[0].m_Origin.x - fVar2;
      VStack_6.z = fVar13 - fVar4;
      VStack_6.y = aRStack_32[0].m_Origin.y - fVar3;
      fVar19 = (float)FUN_?(&VStack_6);
      VStack_6.x = (float)uStack_16 - fVar2;
      VStack_6.z = fVar5 - fVar4;
      VStack_6.y = uStack_16._4_4_ - fVar3;
      fVar10 = (float)FUN_?(&VStack_6);
      pVVar42 = (this->fields)._worldPoints;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uVar43 = pVVar33->x;
      uVar44 = pVVar33->y;
      fVar13 = pVVar33->z;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uStack_16._0_4_ = pVVar33->x;
      uStack_16._4_4_ = pVVar33->y;
      fVar5 = pVVar33->z;
      if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar42->max_length < 5) goto code_?;
      pVVar42->vector[4].x = (fVar2 - (float)uVar43 * fVar19) + (float)uStack_16 * fVar10;
      pVVar42->vector[4].y = (fVar3 - (float)uVar44 * fVar19) + uStack_16._4_4_ * fVar10;
      pVVar42->vector[4].z = (fVar4 - fVar13 * fVar19) + fVar5 * fVar10;
      pVVar42 = (this->fields)._worldPoints;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uVar45 = pVVar33->x;
      uVar46 = pVVar33->y;
      fVar13 = pVVar33->z;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uStack_16._0_4_ = pVVar33->x;
      uStack_16._4_4_ = pVVar33->y;
      fVar5 = pVVar33->z;
      if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar42->max_length < 6) goto code_?;
      pVVar42->vector[5].x = (float)uVar45 * fVar19 + fVar2 + (float)uStack_16 * fVar10;
      pVVar42->vector[5].y = (float)uVar46 * fVar19 + fVar3 + uStack_16._4_4_ * fVar10;
      pVVar42->vector[5].z = fVar13 * fVar19 + fVar4 + fVar5 * fVar10;
      pVVar42 = (this->fields)._worldPoints;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uVar47 = pVVar33->x;
      uVar48 = pVVar33->y;
      fVar13 = pVVar33->z;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uStack_16._0_4_ = pVVar33->x;
      uStack_16._4_4_ = pVVar33->y;
      fVar5 = pVVar33->z;
      if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar42->max_length < 7) goto code_?;
      pVVar42->vector[6].x = ((float)uVar47 * fVar19 + fVar2) - (float)uStack_16 * fVar10;
      pVVar42->vector[6].y = ((float)uVar48 * fVar19 + fVar3) - uStack_16._4_4_ * fVar10;
      pVVar42->vector[6].z = (fVar13 * fVar19 + fVar4) - fVar5 * fVar10;
      pVVar42 = (this->fields)._worldPoints;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uVar49 = pVVar33->x;
      uVar50 = pVVar33->y;
      fVar13 = pVVar33->z;
      pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
      uStack_16._0_4_ = pVVar33->x;
      uStack_16._4_4_ = pVVar33->y;
      fVar5 = pVVar33->z;
      if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar42->max_length < 8) goto code_?;
      pVVar42->vector[7].x = (fVar2 - (float)uVar49 * fVar19) - (float)uStack_16 * fVar10;
      pVVar42->vector[7].y = (fVar3 - (float)uVar50 * fVar19) - uStack_16._4_4_ * fVar10;
      pVVar42->vector[7].z = (fVar4 - fVar13 * fVar19) - fVar5 * fVar10;
    }
    pPVar1 = (this->fields)._worldPlanes;
    if (pPVar1 != (Plane__Array *)0x0) {
      if (4 < (uint)pPVar1->max_length) {
        PVar51 = pPVar1->vector[4];
        fVar2 = PVar51.m_Normal.x;
        fVar3 = PVar51.m_Normal.y;
        fVar4 = PVar51.m_Normal.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_20.x = 0.0;
        VStack_20.y = 0.0;
        VStack_20.z = 0.0;
        pvVar7 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7);
        if (fVar2 * VStack_20.x + fVar3 * VStack_20.y + VStack_20.z * fVar4 +
            PVar51.m_Distance < 0.0) {
          uStack_16 = PVar51.m_Normal._0_8_;
          fVar5 = fVar4;
        }
        else {
          uStack_16 = CONCAT44((uint)fVar3 ^ uVar11,(uint)fVar2 ^ uVar11);
          fVar5 = (float)((uint)fVar4 ^ uVar11);
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aRStack_32[0].m_Origin.x = 0.0;
        aRStack_32[0].m_Origin.y = 0.0;
        aRStack_32[0].m_Origin.z = 0.0;
        pvVar7 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,aRStack_32);
        fVar10 = aRStack_32[0].m_Origin.z;
        fVar13 = (float)uStack_16;
        fVar19 = uStack_16._4_4_;
        VStack_15.x = aRStack_32[0].m_Origin.x;
        VStack_15.y = aRStack_32[0].m_Origin.y;
        fStack_17 = fVar5;
        fVar18 = (float)FUN_?(&uStack_16);
        if (_UNK_? < fVar18) {
          fVar5 = fVar5 / fVar18;
          uStack_16 = CONCAT44(fVar19 / fVar18,fVar13 / fVar18);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_16._0_4_ = (pVVar21->zeroVector).x;
          uStack_16._4_4_ = (pVVar21->zeroVector).y;
          fVar5 = (pVVar21->zeroVector).z;
        }
        fStack_22 = (float)uStack_16;
        fStack_23 = (float)((ulonglong)uStack_16 >> 0x20);
        fVar19 = fVar3 * fStack_23 + fVar2 * fStack_22 + fVar5 * fVar4;
        fVar13 = fVar3 * VStack_15.y;
        fVar2 = fVar2 * VStack_15.x;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Mathf);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auVar52._0_4_ = (float)((uint)fVar19 & uVar27);
        auVar52._4_4_ = (uint)fVar3 & uVar26;
        auVar52._8_4_ = (uint)fVar3 & uVar25;
        auVar52._12_4_ = (uint)fVar3 & uVar24;
        if (auVar52._0_4_ <= 0.0) {
          auVar53._12_4_ = 0;
          auVar53._0_12_ = auVar52._4_12_;
          auVar52 = auVar53 << 0x20;
        }
        fVar18 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
        fVar3 = auVar52._0_4_ * _UNK_?;
        if (fVar3 <= fVar18) {
          fVar3 = fVar18;
        }
        if (((float)((uint)(0.0 - fVar19) & uVar27) < fVar3) ||
           (afStackX_10[0] =
                 ((float)((uint)(fVar13 + fVar2 + fVar10 * fVar4) ^ uVar11) - PVar51.m_Distance) /
                 fVar19, afStackX_10[0] <= 0.0)) {
          return;
        }
        fVar2 = (float)uStack_16 * afStackX_10[0] + aRStack_32[0].m_Origin.x;
        fVar3 = uStack_16._4_4_ * afStackX_10[0] + aRStack_32[0].m_Origin.y;
        fVar4 = fVar5 * afStackX_10[0] + aRStack_32[0].m_Origin.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_20.x = (pVVar21->zeroVector).x;
        VStack_20.y = (pVVar21->zeroVector).y;
        fVar5 = (pVVar21->zeroVector).z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar54 = (MethodInfo *)0x0;
        pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_16._0_4_ = (pVVar21->zeroVector).x;
        uStack_16._4_4_ = (pVVar21->zeroVector).y;
        fVar13 = (pVVar21->zeroVector).z;
        pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
        aRStack_32[0].m_Origin.x = pVVar33->x;
        aRStack_32[0].m_Origin.y = pVVar33->y;
        aRStack_32[0].m_Origin.z = pVVar33->z;
        VStack_15.y = fVar3;
        VStack_15.x = fVar2;
        VStack_15.z = fVar4;
        pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            (&PStack_34.m_Normal,&aRStack_32[0].m_Origin,pMVar54);
        uVar55 = pVVar33->x;
        uVar56 = pVVar33->y;
        fVar19 = pVVar33->z;
        pPVar1 = (this->fields)._worldPlanes;
        fStack_22 = (float)uVar55;
        fStack_23 = (float)uVar56;
        fStack_57 = fVar19;
        if (pPVar1 == (Plane__Array *)0x0) goto code_?;
        if (3 < (uint)pPVar1->max_length) {
          PStack_34.m_Normal.x = pPVar1->vector[3].m_Normal.x;
          PStack_34.m_Normal.y = pPVar1->vector[3].m_Normal.y;
          PStack_34._8_8_ = *(undefined8 *)&pPVar1->vector[3].m_Normal.z;
          aRStack_32[0].m_Direction.z = fVar19;
          aRStack_32[0].m_Direction.y = (float)uVar56;
          aRStack_32[0].m_Origin.x = VStack_15.x;
          aRStack_32[0].m_Origin.y = VStack_15.y;
          aRStack_32[0].m_Origin.z = VStack_15.z;
          aRStack_32[0].m_Direction.x = (float)uVar55;
          bVar58 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                             (&PStack_34,aRStack_32,afStackX_10,in_R9);
          if (bVar58 != 0) {
            fVar5 = fVar19 * afStackX_10[0] + fVar4;
            VStack_20.y = fStack_23 * afStackX_10[0] + fVar3;
            VStack_20.x = (float)uVar55 * afStackX_10[0] + fVar2;
          }
          pMVar54 = (MethodInfo *)0x0;
          pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
          aRStack_32[0].m_Origin.x = pVVar33->x;
          aRStack_32[0].m_Origin.y = pVVar33->y;
          aRStack_32[0].m_Origin.z = pVVar33->z;
          VStack_15.y = fVar3;
          VStack_15.x = fVar2;
          VStack_15.z = fVar4;
          pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                              (&PStack_34.m_Normal,&aRStack_32[0].m_Origin,pMVar54);
          uVar59 = pVVar33->x;
          uVar60 = pVVar33->y;
          fVar19 = pVVar33->z;
          pPVar1 = (this->fields)._worldPlanes;
          fStack_22 = (float)uVar59;
          fStack_23 = (float)uVar60;
          fStack_57 = fVar19;
          if (pPVar1 == (Plane__Array *)0x0) goto code_?;
          if (1 < (uint)pPVar1->max_length) {
            PStack_34.m_Normal.x = pPVar1->vector[1].m_Normal.x;
            PStack_34.m_Normal.y = pPVar1->vector[1].m_Normal.y;
            PStack_34._8_8_ = *(undefined8 *)&pPVar1->vector[1].m_Normal.z;
            aRStack_32[0].m_Direction.z = fVar19;
            aRStack_32[0].m_Direction.y = (float)uVar60;
            aRStack_32[0].m_Origin.x = VStack_15.x;
            aRStack_32[0].m_Origin.y = VStack_15.y;
            aRStack_32[0].m_Origin.z = VStack_15.z;
            aRStack_32[0].m_Direction.x = (float)uVar59;
            bVar58 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                               (&PStack_34,aRStack_32,afStackX_10,in_R9);
            if (bVar58 != 0) {
              fVar13 = fVar19 * afStackX_10[0] + fVar4;
              uStack_16 = CONCAT44(fStack_23 * afStackX_10[0] + fVar3,
                                    (float)uVar59 * afStackX_10[0] + fVar2);
            }
            VStack_6.x = (float)uStack_16 - fVar2;
            VStack_6.z = fVar13 - fVar4;
            VStack_6.y = uStack_16._4_4_ - fVar3;
            fVar10 = (float)FUN_?(&VStack_6);
            VStack_6.x = VStack_20.x - fVar2;
            VStack_6.z = fVar5 - fVar4;
            VStack_6.y = VStack_20.y - fVar3;
            fVar18 = (float)FUN_?(&VStack_6);
            pVVar42 = (this->fields)._worldPoints;
            pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
            uVar61 = pVVar33->x;
            uVar62 = pVVar33->y;
            fVar19 = pVVar33->z;
            pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
            uVar63 = pVVar33->x;
            fVar5 = pVVar33->y;
            fVar13 = pVVar33->z;
            if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
            if ((int)pVVar42->max_length != 0) {
              pVVar42->vector[0].x = (fVar2 - (float)uVar61 * fVar10) + (float)uVar63 * fVar18;
              pVVar42->vector[0].y = (fVar3 - (float)uVar62 * fVar10) + fVar5 * fVar18;
              pVVar42->vector[0].z = (fVar4 - fVar19 * fVar10) + fVar13 * fVar18;
              pVVar42 = (this->fields)._worldPoints;
              pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                  (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
              uVar64 = pVVar33->x;
              uVar65 = pVVar33->y;
              fVar19 = pVVar33->z;
              pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                  (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
              uVar66 = pVVar33->x;
              fVar5 = pVVar33->y;
              fVar13 = pVVar33->z;
              if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
              if (1 < (uint)pVVar42->max_length) {
                pVVar42->vector[1].x = (float)uVar64 * fVar10 + fVar2 + (float)uVar66 * fVar18;
                pVVar42->vector[1].y = (float)uVar65 * fVar10 + fVar3 + fVar5 * fVar18;
                pVVar42->vector[1].z = fVar19 * fVar10 + fVar4 + fVar13 * fVar18;
                pVVar42 = (this->fields)._worldPoints;
                pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
                uVar67 = pVVar33->x;
                uVar68 = pVVar33->y;
                fVar19 = pVVar33->z;
                pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                    (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
                uVar69 = pVVar33->x;
                fVar5 = pVVar33->y;
                fVar13 = pVVar33->z;
                if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
                if (2 < (uint)pVVar42->max_length) {
                  pVVar42->vector[2].x = ((float)uVar67 * fVar10 + fVar2) - (float)uVar69 * fVar18;
                  pVVar42->vector[2].y = ((float)uVar68 * fVar10 + fVar3) - fVar5 * fVar18;
                  pVVar42->vector[2].z = (fVar19 * fVar10 + fVar4) - fVar13 * fVar18;
                  pVVar42 = (this->fields)._worldPoints;
                  pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                      (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
                  uVar70 = pVVar33->x;
                  uVar71 = pVVar33->y;
                  fVar19 = pVVar33->z;
                  pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                      (&PStack_34.m_Normal,this_00,(MethodInfo *)0x0);
                  uVar72 = pVVar33->x;
                  fVar5 = pVVar33->y;
                  fVar13 = pVVar33->z;
                  if (pVVar42 == (Vector3__Array *)0x0) goto code_?;
                  if (3 < (uint)pVVar42->max_length) {
                    pVVar42->vector[3].x =
                         (fVar2 - (float)uVar70 * fVar10) - (float)uVar72 * fVar18;
                    pVVar42->vector[3].y = (fVar3 - (float)uVar71 * fVar10) - fVar5 * fVar18;
                    pVVar42->vector[3].z = (fVar4 - fVar19 * fVar10) - fVar13 * fVar18;
                    return;
                  }
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean CheckAABB(AABB) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB
               (CameraViewVolume *this,AABB *aabb,MethodInfo *method)

{
  fStack_1 = (aabb->_center).z;
  pPVar2 = (this->fields)._worldPlanes;
  pVVar3 = &aabb->_center;
  fStack_4 = pVVar3->x;
  fStack_5 = (aabb->_center).y;
  uStack_6._0_4_ = pVVar3->x;
  uStack_6._4_4_ = pVVar3->y;
  pPStack_7 = *(Plane **)&aabb->_size;
  fStack_8 = SUB84(pPStack_7,0) * _UNK_?;
  uStack_9 = CONCAT44(fStack_8,fStack_1);
  uStack_10 = CONCAT44((aabb->_size).z * _UNK_?,
                       (float)((ulonglong)pPStack_7 >> 0x20) * _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__Span_UnityEngine__Plane____);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_11 = 0;
  if (pPVar2 == (Plane__Array *)0x0) {
    uStack_6 = 0;
    uStack_9 = 0;
    pPVar12 = (Plane *)0x0;
    iStack_13 = 0;
  }
  else {
    iStack_13 = (int)pPVar2->max_length;
    pPVar12 = pPVar2->vector;
  }
  pPStack_7 = (Plane *)0x0;
  if (iStack_13 != 0) {
    pPStack_7 = pPVar12;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    bVar16 = (*pcVar14)();
    return bVar16;
  }
  pcRam_? = pcVar14;
  bVar16 = (*pcRam_?)(&pPStack_7,&fStack_4);
  return bVar16;
}


/* Boolean CheckAABB(Camera, AABB) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB_1
               (Camera *camera,AABB *aabb,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_3.m00 = 0.0;
  MStack_3.m10 = 0.0;
  MStack_3.m20 = 0.0;
  MStack_3.m30 = 0.0;
  MStack_3.m01 = 0.0;
  MStack_3.m11 = 0.0;
  MStack_3.m21 = 0.0;
  MStack_3.m31 = 0.0;
  MStack_3.m02 = 0.0;
  MStack_3.m12 = 0.0;
  MStack_3.m22 = 0.0;
  MStack_3.m32 = 0.0;
  MStack_3.m03 = 0.0;
  MStack_3.m13 = 0.0;
  MStack_3.m23 = 0.0;
  MStack_3.m33 = 0.0;
  pvVar4 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar4);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_6.m00 = 0.0;
  MStack_6.m10 = 0.0;
  MStack_6.m20 = 0.0;
  MStack_6.m30 = 0.0;
  MStack_6.m01 = 0.0;
  MStack_6.m11 = 0.0;
  MStack_6.m21 = 0.0;
  MStack_6.m31 = 0.0;
  MStack_6.m02 = 0.0;
  MStack_6.m12 = 0.0;
  MStack_6.m22 = 0.0;
  MStack_6.m32 = 0.0;
  MStack_6.m03 = 0.0;
  MStack_6.m13 = 0.0;
  MStack_6.m23 = 0.0;
  MStack_6.m33 = 0.0;
  pvVar4 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar4,&MStack_6);
  MStack_7.m00 = MStack_6.m00;
  MStack_7.m10 = MStack_6.m10;
  MStack_7.m20 = MStack_6.m20;
  MStack_7.m30 = MStack_6.m30;
  MStack_7.m01 = MStack_6.m01;
  MStack_7.m11 = MStack_6.m11;
  MStack_7.m21 = MStack_6.m21;
  MStack_7.m31 = MStack_6.m31;
  MStack_7.m02 = MStack_6.m02;
  MStack_7.m12 = MStack_6.m12;
  MStack_7.m22 = MStack_6.m22;
  MStack_7.m32 = MStack_6.m32;
  MStack_7.m03 = MStack_6.m03;
  MStack_7.m13 = MStack_6.m13;
  MStack_7.m23 = MStack_6.m23;
  MStack_7.m33 = MStack_6.m33;
  MStack_6.m00 = MStack_3.m00;
  MStack_6.m10 = MStack_3.m10;
  MStack_6.m20 = MStack_3.m20;
  MStack_6.m30 = MStack_3.m30;
  MStack_6.m01 = MStack_3.m01;
  MStack_6.m11 = MStack_3.m11;
  MStack_6.m21 = MStack_3.m21;
  MStack_6.m31 = MStack_3.m31;
  MStack_6.m02 = MStack_3.m02;
  MStack_6.m12 = MStack_3.m12;
  MStack_6.m22 = MStack_3.m22;
  MStack_6.m32 = MStack_3.m32;
  MStack_6.m03 = MStack_3.m03;
  MStack_6.m13 = MStack_3.m13;
  MStack_6.m23 = MStack_3.m23;
  MStack_6.m33 = MStack_3.m33;
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                     (&MStack_3,&MStack_6,&MStack_7,(MethodInfo *)0x0);
  MStack_7.m00 = pMVar8->m00;
  MStack_7.m10 = pMVar8->m10;
  MStack_7.m20 = pMVar8->m20;
  MStack_7.m30 = pMVar8->m30;
  MStack_7.m01 = pMVar8->m01;
  MStack_7.m11 = pMVar8->m11;
  MStack_7.m21 = pMVar8->m21;
  MStack_7.m31 = pMVar8->m31;
  MStack_7.m02 = pMVar8->m02;
  MStack_7.m12 = pMVar8->m12;
  MStack_7.m22 = pMVar8->m22;
  MStack_7.m32 = pMVar8->m32;
  MStack_7.m03 = pMVar8->m03;
  MStack_7.m13 = pMVar8->m13;
  MStack_7.m23 = pMVar8->m23;
  MStack_7.m33 = pMVar8->m33;
  pPVar9 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
           GeometryUtility_CalculateFrustumPlanes(&MStack_7,(MethodInfo *)0x0);
  fStack_10 = (aabb->_center).z;
  fStack_11 = (aabb->_center).x;
  fStack_12 = (aabb->_center).y;
  pPStack_13 = *(Plane **)&aabb->_size;
  fStack_14 = SUB84(pPStack_13,0) * _UNK_?;
  uStack_15 = CONCAT44((aabb->_size).z * _UNK_?,
                       (float)((ulonglong)pPStack_13 >> 0x20) * _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__Span_UnityEngine__Plane____);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_16 = 0;
  if (pPVar9 == (Plane__Array *)0x0) {
    pPVar17 = (Plane *)0x0;
    iStack_18 = 0;
  }
  else {
    iStack_18 = (int)pPVar9->max_length;
    pPVar17 = pPVar9->vector;
  }
  pPStack_13 = (Plane *)0x0;
  if (iStack_18 != 0) {
    pPStack_13 = pPVar17;
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
  bVar2 = (*pcRam_?)(&pPStack_13,&fStack_11);
  return bVar2;
}


/* Boolean CheckAABB(Camera, AABB, Plane[]) */

bool Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_CheckAABB_2
               (Camera *camera,AABB *aabb,Plane__Array *cameraWorldPlanes,MethodInfo *method)

{
  fStack_1 = (aabb->_center).z;
  pVVar2 = &aabb->_center;
  fStack_3 = pVVar2->x;
  fStack_4 = (aabb->_center).y;
  uStack_5._0_4_ = pVVar2->x;
  uStack_5._4_4_ = pVVar2->y;
  pPStack_6 = *(Plane **)&aabb->_size;
  fStack_7 = SUB84(pPStack_6,0) * _UNK_?;
  uStack_8 = CONCAT44(fStack_7,fStack_1);
  uStack_9 = CONCAT44((aabb->_size).z * _UNK_?,
                       (float)((ulonglong)pPStack_6 >> 0x20) * _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__Span_UnityEngine__Plane____);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<UnityEngine::Plane>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_10 = 0;
  if (cameraWorldPlanes == (Plane__Array *)0x0) {
    uStack_5 = 0;
    uStack_8 = 0;
    pPVar11 = (Plane *)0x0;
    iStack_12 = 0;
  }
  else {
    iStack_12 = (int)cameraWorldPlanes->max_length;
    pPVar11 = cameraWorldPlanes->vector;
  }
  pPStack_6 = (Plane *)0x0;
  if (iStack_12 != 0) {
    pPStack_6 = pPVar11;
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar13 = (code *)swi(3);
    bVar15 = (*pcVar13)();
    return bVar15;
  }
  pcRam_? = pcVar13;
  bVar15 = (*pcRam_?)(&pPStack_6,&fStack_3);
  return bVar15;
}


/* Void FromCamera(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_FromCamera
               (CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_1.m00 = 0.0;
    MStack_1.m10 = 0.0;
    MStack_1.m20 = 0.0;
    MStack_1.m30 = 0.0;
    MStack_1.m01 = 0.0;
    MStack_1.m11 = 0.0;
    MStack_1.m21 = 0.0;
    MStack_1.m31 = 0.0;
    MStack_1.m02 = 0.0;
    MStack_1.m12 = 0.0;
    MStack_1.m22 = 0.0;
    MStack_1.m32 = 0.0;
    MStack_1.m03 = 0.0;
    MStack_1.m13 = 0.0;
    MStack_1.m23 = 0.0;
    MStack_1.m33 = 0.0;
    pvVar2 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_5.m00 = 0.0;
    MStack_5.m10 = 0.0;
    MStack_5.m20 = 0.0;
    MStack_5.m30 = 0.0;
    MStack_5.m01 = 0.0;
    MStack_5.m11 = 0.0;
    MStack_5.m21 = 0.0;
    MStack_5.m31 = 0.0;
    MStack_5.m02 = 0.0;
    MStack_5.m12 = 0.0;
    MStack_5.m22 = 0.0;
    MStack_5.m32 = 0.0;
    MStack_5.m03 = 0.0;
    MStack_5.m13 = 0.0;
    MStack_5.m23 = 0.0;
    MStack_5.m33 = 0.0;
    pvVar2 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,&MStack_5);
    aMStack_6[0].m00 = MStack_5.m00;
    aMStack_6[0].m10 = MStack_5.m10;
    aMStack_6[0].m20 = MStack_5.m20;
    aMStack_6[0].m30 = MStack_5.m30;
    aMStack_6[0].m01 = MStack_5.m01;
    aMStack_6[0].m11 = MStack_5.m11;
    aMStack_6[0].m21 = MStack_5.m21;
    aMStack_6[0].m31 = MStack_5.m31;
    aMStack_6[0].m02 = MStack_5.m02;
    aMStack_6[0].m12 = MStack_5.m12;
    aMStack_6[0].m22 = MStack_5.m22;
    aMStack_6[0].m32 = MStack_5.m32;
    aMStack_6[0].m03 = MStack_5.m03;
    aMStack_6[0].m13 = MStack_5.m13;
    aMStack_6[0].m23 = MStack_5.m23;
    aMStack_6[0].m33 = MStack_5.m33;
    MStack_5.m00 = MStack_1.m00;
    MStack_5.m10 = MStack_1.m10;
    MStack_5.m20 = MStack_1.m20;
    MStack_5.m30 = MStack_1.m30;
    MStack_5.m01 = MStack_1.m01;
    MStack_5.m11 = MStack_1.m11;
    MStack_5.m21 = MStack_1.m21;
    MStack_5.m31 = MStack_1.m31;
    MStack_5.m02 = MStack_1.m02;
    MStack_5.m12 = MStack_1.m12;
    MStack_5.m22 = MStack_1.m22;
    MStack_5.m32 = MStack_1.m32;
    MStack_5.m03 = MStack_1.m03;
    MStack_5.m13 = MStack_1.m13;
    MStack_5.m23 = MStack_1.m23;
    MStack_5.m33 = MStack_1.m33;
    pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        (&MStack_1,&MStack_5,aMStack_6,(MethodInfo *)0x0);
    aMStack_6[0].m00 = pMVar7->m00;
    aMStack_6[0].m10 = pMVar7->m10;
    aMStack_6[0].m20 = pMVar7->m20;
    aMStack_6[0].m30 = pMVar7->m30;
    aMStack_6[0].m01 = pMVar7->m01;
    aMStack_6[0].m11 = pMVar7->m11;
    aMStack_6[0].m21 = pMVar7->m21;
    aMStack_6[0].m31 = pMVar7->m31;
    aMStack_6[0].m02 = pMVar7->m02;
    aMStack_6[0].m12 = pMVar7->m12;
    aMStack_6[0].m22 = pMVar7->m22;
    aMStack_6[0].m32 = pMVar7->m32;
    aMStack_6[0].m03 = pMVar7->m03;
    aMStack_6[0].m13 = pMVar7->m13;
    aMStack_6[0].m23 = pMVar7->m23;
    aMStack_6[0].m33 = pMVar7->m33;
    pPVar8 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
              GeometryUtility_CalculateFrustumPlanes(aMStack_6,(MethodInfo *)0x0);
    bVar9 = iRam_? != 0;
    (this->fields)._worldPlanes = pPVar8;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(this->fields)._worldPlanes >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    CameraViewVolume_CalculateWorldPoints(this,camera,(MethodInfo *)0x0);
    pVVar14 = (this->fields)._worldPoints;
    if (pVVar14 != (Vector3__Array *)0x0) {
      if ((4 < (uint)pVVar14->max_length) && (5 < (uint)pVVar14->max_length)) {
        uVar15 = pVVar14->vector[4].x;
        uVar16 = pVVar14->vector[4].y;
        uStack_17._0_4_ = pVVar14->vector[5].x;
        uStack_17._4_4_ = pVVar14->vector[5].y;
        fStack_18 = pVVar14->vector[4].z - pVVar14->vector[5].z;
        uStack_19 = CONCAT44((float)uVar16 - uStack_17._4_4_,(float)uVar15 - (float)uStack_17);
        fVar20 = (float)FUN_?(&uStack_19);
        (this->fields)._farPlaneSize.x = fVar20;
        pVVar14 = (this->fields)._worldPoints;
        if (pVVar14 == (Vector3__Array *)0x0) goto DAT_?;
        if ((4 < (uint)pVVar14->max_length) && (7 < (uint)pVVar14->max_length)) {
          uVar21 = pVVar14->vector[4].x;
          uVar22 = pVVar14->vector[4].y;
          uStack_17._0_4_ = pVVar14->vector[7].x;
          uStack_17._4_4_ = pVVar14->vector[7].y;
          fStack_18 = pVVar14->vector[4].z - pVVar14->vector[7].z;
          uStack_19 = CONCAT44((float)uVar22 - uStack_17._4_4_,(float)uVar21 - (float)uStack_17);
          fVar20 = (float)FUN_?(&uStack_19);
          (this->fields)._farPlaneSize.y = fVar20;
          pVVar14 = (this->fields)._worldPoints;
          if (pVVar14 == (Vector3__Array *)0x0) goto DAT_?;
          if (((int)pVVar14->max_length != 0) && (1 < (uint)pVVar14->max_length)) {
            uVar23 = pVVar14->vector[0].x;
            uVar24 = pVVar14->vector[0].y;
            uStack_17._0_4_ = pVVar14->vector[1].x;
            uStack_17._4_4_ = pVVar14->vector[1].y;
            fStack_18 = pVVar14->vector[0].z - pVVar14->vector[1].z;
            uStack_19 = CONCAT44((float)uVar24 - uStack_17._4_4_,(float)uVar23 - (float)uStack_17);
            fVar20 = (float)FUN_?(&uStack_19);
            (this->fields)._nearPlaneSize.x = fVar20;
            pVVar14 = (this->fields)._worldPoints;
            if (pVVar14 == (Vector3__Array *)0x0) goto DAT_?;
            if (((int)pVVar14->max_length != 0) && (3 < (uint)pVVar14->max_length)) {
              uVar25 = pVVar14->vector[0].x;
              uVar26 = pVVar14->vector[0].y;
              uStack_17._0_4_ = pVVar14->vector[3].x;
              uStack_17._4_4_ = pVVar14->vector[3].y;
              fStack_18 = pVVar14->vector[0].z - pVVar14->vector[3].z;
              uStack_19 = CONCAT44((float)uVar26 - uStack_17._4_4_,(float)uVar25 - (float)uStack_17
                                   );
              fVar20 = (float)FUN_?(&uStack_19);
              (this->fields)._nearPlaneSize.y = fVar20;
              AStack_27._center.y = 0.0;
              AStack_27._center.z = 0.0;
              AStack_27._isValid = 0;
              AStack_27._25_3_ = 0;
              AStack_27._size.x = 0.0;
              AStack_27._size.y = 0.0;
              AStack_27._size.z = 0.0;
              AStack_27._center.x = 0.0;
              AABB::AABB__ctor_2(&AStack_27,
                                 (IEnumerable_1_UnityEngine_Vector3_ *)(this->fields)._worldPoints,
                                 (MethodInfo *)0x0);
              bVar9 = cRam_? == '\0';
              (this->fields)._worldAABB._size.x = AStack_27._size.x;
              (this->fields)._worldAABB._size.y = AStack_27._size.y;
              (this->fields)._worldAABB._size.z = AStack_27._size.z;
              (this->fields)._worldAABB._center.x = AStack_27._center.x;
              (this->fields)._worldAABB._center.y = AStack_27._center.y;
              (this->fields)._worldAABB._center.z = AStack_27._center.z;
              (this->fields)._worldAABB._isValid = AStack_27._isValid;
              *(undefined3 *)&(this->fields)._worldAABB.field_0x19 = AStack_27._25_3_;
              fVar20 = (this->fields)._farPlaneSize.x;
              fVar28 = (this->fields)._farPlaneSize.y;
              if (bVar9) {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar2 = (camera->fields)._._._.m_CachedPtr;
              if (pvVar2 != (void *)0x0) {
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar4 = func_?(&UNK_?);
                  FUN_?(uVar4,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                fVar29 = (float)(*pcRam_?)(pvVar2);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar2 = (camera->fields)._._._.m_CachedPtr;
                if (pvVar2 != (void *)0x0) {
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar4 = func_?(&UNK_?);
                    FUN_?(uVar4,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  fVar30 = (float)(*pcRam_?)(pvVar2);
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                  if (this_00 == (Transform *)0x0) goto DAT_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_19 = 0;
                  fStack_18 = 0.0;
                  pvVar2 = (this_00->fields)._._.m_CachedPtr;
                  if (pvVar2 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar4 = func_?(&UNK_?);
                    FUN_?(uVar4,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  (*pcRam_?)(pvVar2,&uStack_19);
                  pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward(&AStack_27._size,this_00,(MethodInfo *)0x0);
                  uStack_17._0_4_ = pVVar31->x;
                  uStack_17._4_4_ = pVVar31->y;
                  fVar32 = pVVar31->z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar2 = (camera->fields)._._._.m_CachedPtr;
                  if (pvVar2 != (void *)0x0) {
                    pcVar3 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                      uVar4 = func_?(&UNK_?);
                      FUN_?(uVar4,0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcRam_? = pcVar3;
                    fVar33 = (float)(*pcRam_?)(pvVar2);
                    fVar33 = fVar33 + (fVar29 - fVar30) * _UNK_?;
                    fVar34 = (float)uStack_17 * fVar33 + (float)uStack_19;
                    fVar35 = uStack_17._4_4_ * fVar33 + uStack_19._4_4_;
                    fVar32 = fVar32 * fVar33 + fStack_18;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    AStack_27._size.x = 0.0;
                    AStack_27._size.y = 0.0;
                    AStack_27._size.z = 0.0;
                    AStack_27._center.x = 0.0;
                    pvVar2 = (this_00->fields)._._.m_CachedPtr;
                    if (pvVar2 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0)
                      ;
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcVar3 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                      uVar4 = func_?(&UNK_?);
                      FUN_?(uVar4,0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcRam_? = pcVar3;
                    (*pcRam_?)(pvVar2,&AStack_27);
                    MStack_5.m21 = AStack_27._size.x;
                    MStack_5.m31 = AStack_27._size.y;
                    (this->fields)._worldOBB._size.x = fVar20;
                    (this->fields)._worldOBB._size.y = fVar28;
                    (this->fields)._worldOBB._size.z = fVar29 - fVar30;
                    (this->fields)._worldOBB._center.x = fVar34;
                    (this->fields)._worldOBB._center.y = fVar35;
                    (this->fields)._worldOBB._center.z = fVar32;
                    (this->fields)._worldOBB._rotation.x = MStack_5.m21;
                    (this->fields)._worldOBB._rotation.y = MStack_5.m31;
                    (this->fields)._worldOBB._rotation.z = AStack_27._size.z;
                    (this->fields)._worldOBB._rotation.w = AStack_27._center.x;
                    *(undefined4 *)&(this->fields)._worldOBB._isValid = 1;
                    return;
                  }
                }
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Plane[] GetCameraWorldPlanes(Camera) */

Plane__Array *
Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_GetCameraWorldPlanes
          (Camera *camera,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane__Array *)(*pcVar1)();
    return pPVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_3.m00 = 0.0;
  MStack_3.m10 = 0.0;
  MStack_3.m20 = 0.0;
  MStack_3.m30 = 0.0;
  MStack_3.m01 = 0.0;
  MStack_3.m11 = 0.0;
  MStack_3.m21 = 0.0;
  MStack_3.m31 = 0.0;
  MStack_3.m02 = 0.0;
  MStack_3.m12 = 0.0;
  MStack_3.m22 = 0.0;
  MStack_3.m32 = 0.0;
  MStack_3.m03 = 0.0;
  MStack_3.m13 = 0.0;
  MStack_3.m23 = 0.0;
  MStack_3.m33 = 0.0;
  pvVar4 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane__Array *)(*pcVar1)();
    return pPVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane__Array *)(*pcVar1)();
    return pPVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MStack_6.m00 = 0.0;
  MStack_6.m10 = 0.0;
  MStack_6.m20 = 0.0;
  MStack_6.m30 = 0.0;
  MStack_6.m01 = 0.0;
  MStack_6.m11 = 0.0;
  MStack_6.m21 = 0.0;
  MStack_6.m31 = 0.0;
  MStack_6.m02 = 0.0;
  MStack_6.m12 = 0.0;
  MStack_6.m22 = 0.0;
  MStack_6.m32 = 0.0;
  MStack_6.m03 = 0.0;
  MStack_6.m13 = 0.0;
  MStack_6.m23 = 0.0;
  MStack_6.m33 = 0.0;
  pvVar4 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane__Array *)(*pcVar1)();
    return pPVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane__Array *)(*pcVar1)();
    return pPVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&MStack_6);
  MStack_7.m00 = MStack_6.m00;
  MStack_7.m10 = MStack_6.m10;
  MStack_7.m20 = MStack_6.m20;
  MStack_7.m30 = MStack_6.m30;
  MStack_7.m01 = MStack_6.m01;
  MStack_7.m11 = MStack_6.m11;
  MStack_7.m21 = MStack_6.m21;
  MStack_7.m31 = MStack_6.m31;
  MStack_7.m02 = MStack_6.m02;
  MStack_7.m12 = MStack_6.m12;
  MStack_7.m22 = MStack_6.m22;
  MStack_7.m32 = MStack_6.m32;
  MStack_7.m03 = MStack_6.m03;
  MStack_7.m13 = MStack_6.m13;
  MStack_7.m23 = MStack_6.m23;
  MStack_7.m33 = MStack_6.m33;
  MStack_6.m00 = MStack_3.m00;
  MStack_6.m10 = MStack_3.m10;
  MStack_6.m20 = MStack_3.m20;
  MStack_6.m30 = MStack_3.m30;
  MStack_6.m01 = MStack_3.m01;
  MStack_6.m11 = MStack_3.m11;
  MStack_6.m21 = MStack_3.m21;
  MStack_6.m31 = MStack_3.m31;
  MStack_6.m02 = MStack_3.m02;
  MStack_6.m12 = MStack_3.m12;
  MStack_6.m22 = MStack_3.m22;
  MStack_6.m32 = MStack_3.m32;
  MStack_6.m03 = MStack_3.m03;
  MStack_6.m13 = MStack_3.m13;
  MStack_6.m23 = MStack_3.m23;
  MStack_6.m33 = MStack_3.m33;
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                     (&MStack_3,&MStack_6,&MStack_7,(MethodInfo *)0x0);
  MStack_7.m00 = pMVar8->m00;
  MStack_7.m10 = pMVar8->m10;
  MStack_7.m20 = pMVar8->m20;
  MStack_7.m30 = pMVar8->m30;
  MStack_7.m01 = pMVar8->m01;
  MStack_7.m11 = pMVar8->m11;
  MStack_7.m21 = pMVar8->m21;
  MStack_7.m31 = pMVar8->m31;
  MStack_7.m02 = pMVar8->m02;
  MStack_7.m12 = pMVar8->m12;
  MStack_7.m22 = pMVar8->m22;
  MStack_7.m32 = pMVar8->m32;
  MStack_7.m03 = pMVar8->m03;
  MStack_7.m13 = pMVar8->m13;
  MStack_7.m23 = pMVar8->m23;
  MStack_7.m33 = pMVar8->m33;
  pPVar2 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
           GeometryUtility_CalculateFrustumPlanes(&MStack_7,(MethodInfo *)0x0);
  return pPVar2;
}


/* List`1[UnityEngine.Vector3] GetNearPlanePoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_GetNearPlanePoints
          (CameraViewVolume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
               );
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  pVVar2 = (this->fields)._worldPoints;
  if (pVVar2 != (Vector3__Array *)0x0) {
    if ((int)pVVar2->max_length == 0) goto code_?;
    if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
      uVar3._0_4_ = (int32_t)pVVar2->vector[0].x;
      uVar3._4_4_ = (int32_t)pVVar2->vector[0].y;
      fVar4 = pVVar2->vector[0].z;
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pPVar6 = (this_00->fields)._items;
      if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
        uVar7 = (this_00->fields)._size;
        if (uVar7 < (uint)pPVar6->max_length) {
          (this_00->fields)._size = uVar7 + 1;
          if ((uint)pPVar6->max_length <= uVar7) goto code_?;
          pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar3;
          pPVar6->vector[(int)uVar7].FirstAxisSign = uVar3._4_4_;
          pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
        }
        else {
          PStack_8._0_8_ = uVar3;
          PStack_8.SecondAxisSign = (int32_t)fVar4;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (this_00,&PStack_8,pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
        ;
        pVVar2 = (this->fields)._worldPoints;
        if (pVVar2 != (Vector3__Array *)0x0) {
          if ((uint)pVVar2->max_length < 2) goto code_?;
          uVar9._0_4_ = (int32_t)pVVar2->vector[1].x;
          uVar9._4_4_ = (int32_t)pVVar2->vector[1].y;
          fVar4 = pVVar2->vector[1].z;
          piVar5 = &(this_00->fields)._version;
          *piVar5 = *piVar5 + 1;
          pPVar6 = (this_00->fields)._items;
          if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
            uVar7 = (this_00->fields)._size;
            if (uVar7 < (uint)pPVar6->max_length) {
              (this_00->fields)._size = uVar7 + 1;
              if ((uint)pPVar6->max_length <= uVar7) goto code_?;
              pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar9;
              pPVar6->vector[(int)uVar7].FirstAxisSign = uVar9._4_4_;
              pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
            }
            else {
              PStack_8._0_8_ = uVar9;
              PStack_8.SecondAxisSign = (int32_t)fVar4;
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (this_00,&PStack_8,pMVar1->klass->rgctx_data[0xe].method);
            }
            pMVar1 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
            ;
            pVVar2 = (this->fields)._worldPoints;
            if (pVVar2 != (Vector3__Array *)0x0) {
              if ((uint)pVVar2->max_length < 3) goto code_?;
              uVar10._0_4_ = (int32_t)pVVar2->vector[2].x;
              uVar10._4_4_ = (int32_t)pVVar2->vector[2].y;
              fVar4 = pVVar2->vector[2].z;
              piVar5 = &(this_00->fields)._version;
              *piVar5 = *piVar5 + 1;
              pPVar6 = (this_00->fields)._items;
              if (pPVar6 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                uVar7 = (this_00->fields)._size;
                if (uVar7 < (uint)pPVar6->max_length) {
                  (this_00->fields)._size = uVar7 + 1;
                  if ((uint)pPVar6->max_length <= uVar7) goto code_?;
                  pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar10;
                  pPVar6->vector[(int)uVar7].FirstAxisSign = uVar10._4_4_;
                  pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
                }
                else {
                  PStack_8._0_8_ = uVar10;
                  PStack_8.SecondAxisSign = (int32_t)fVar4;
                  mscorlib.dll::System::Collections::Generic::List`1[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                            (this_00,&PStack_8,pMVar1->klass->rgctx_data[0xe].method);
                }
                pMVar1 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                ;
                pVVar2 = (this->fields)._worldPoints;
                if (pVVar2 != (Vector3__Array *)0x0) {
                  if (3 < (uint)pVVar2->max_length) {
                    uVar11._0_4_ = (int32_t)pVVar2->vector[3].x;
                    uVar11._4_4_ = (int32_t)pVVar2->vector[3].y;
                    fVar4 = pVVar2->vector[3].z;
                    piVar5 = &(this_00->fields)._version;
                    *piVar5 = *piVar5 + 1;
                    pPVar6 = (this_00->fields)._items;
                    if (pPVar6 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                    goto code_?;
                    uVar7 = (this_00->fields)._size;
                    if ((uint)pPVar6->max_length <= uVar7) {
                      PStack_8._0_8_ = uVar11;
                      PStack_8.SecondAxisSign = (int32_t)fVar4;
                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                      PlaneIdHelper+PlaneQuadrantInfo]::
                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                (this_00,&PStack_8,pMVar1->klass->rgctx_data[0xe].method);
                      return (List_1_UnityEngine_Vector3_ *)this_00;
                    }
                    (this_00->fields)._size = uVar7 + 1;
                    if (uVar7 < (uint)pPVar6->max_length) {
                      pPVar6->vector[(int)uVar7].Quadrant = (int32_t)uVar11;
                      pPVar6->vector[(int)uVar7].FirstAxisSign = uVar11._4_4_;
                      pPVar6->vector[(int)uVar7].SecondAxisSign = (int32_t)fVar4;
                      return (List_1_UnityEngine_Vector3_ *)this_00;
                    }
                  }
code_?:
                  FUN_?();
                  pcVar12 = (code *)swi(3);
                  pLVar13 = (List_1_UnityEngine_Vector3_ *)(*pcVar12)();
                  return pLVar13;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  pLVar13 = (List_1_UnityEngine_Vector3_ *)(*pcVar12)();
  return pLVar13;
}


/* CameraViewVolume() */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume__ctor
               (CameraViewVolume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Plane);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  bVar2 = iRam_? != 0;
  (this->fields)._worldPoints = pVVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pPVar7 = (Plane__Array *)FUN_?(TypeInfo__UnityEngine__Plane,6);
  bVar2 = iRam_? != 0;
  (this->fields)._worldPlanes = pPVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._worldPlanes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar8 = cRam_?;
  fVar9 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._farPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._farPlaneSize.y = fVar9;
  if (cVar8 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar9 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._nearPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._nearPlaneSize.y = fVar9;
  return;
}


/* CameraViewVolume(Camera) */

void Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume__ctor_1
               (CameraViewVolume *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Plane);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  bVar2 = iRam_? != 0;
  (this->fields)._worldPoints = pVVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pPVar7 = (Plane__Array *)FUN_?(TypeInfo__UnityEngine__Plane,6);
  bVar2 = iRam_? != 0;
  (this->fields)._worldPlanes = pPVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._worldPlanes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar8 = cRam_?;
  fVar9 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._farPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._farPlaneSize.y = fVar9;
  if (cVar8 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar9 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._nearPlaneSize.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._nearPlaneSize.y = fVar9;
  if (camera != (Camera *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                    ,camera,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_10.m00 = 0.0;
    MStack_10.m10 = 0.0;
    MStack_10.m20 = 0.0;
    MStack_10.m30 = 0.0;
    MStack_10.m01 = 0.0;
    MStack_10.m11 = 0.0;
    MStack_10.m21 = 0.0;
    MStack_10.m31 = 0.0;
    MStack_10.m02 = 0.0;
    MStack_10.m12 = 0.0;
    MStack_10.m22 = 0.0;
    MStack_10.m32 = 0.0;
    MStack_10.m03 = 0.0;
    MStack_10.m13 = 0.0;
    MStack_10.m23 = 0.0;
    MStack_10.m33 = 0.0;
    pvVar11 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar11);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_14.m00 = 0.0;
    MStack_14.m10 = 0.0;
    MStack_14.m20 = 0.0;
    MStack_14.m30 = 0.0;
    MStack_14.m01 = 0.0;
    MStack_14.m11 = 0.0;
    MStack_14.m21 = 0.0;
    MStack_14.m31 = 0.0;
    MStack_14.m02 = 0.0;
    MStack_14.m12 = 0.0;
    MStack_14.m22 = 0.0;
    MStack_14.m32 = 0.0;
    MStack_14.m03 = 0.0;
    MStack_14.m13 = 0.0;
    MStack_14.m23 = 0.0;
    MStack_14.m33 = 0.0;
    pvVar11 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar11,&MStack_14);
    aMStack_15[0].m00 = MStack_14.m00;
    aMStack_15[0].m10 = MStack_14.m10;
    aMStack_15[0].m20 = MStack_14.m20;
    aMStack_15[0].m30 = MStack_14.m30;
    aMStack_15[0].m01 = MStack_14.m01;
    aMStack_15[0].m11 = MStack_14.m11;
    aMStack_15[0].m21 = MStack_14.m21;
    aMStack_15[0].m31 = MStack_14.m31;
    aMStack_15[0].m02 = MStack_14.m02;
    aMStack_15[0].m12 = MStack_14.m12;
    aMStack_15[0].m22 = MStack_14.m22;
    aMStack_15[0].m32 = MStack_14.m32;
    aMStack_15[0].m03 = MStack_14.m03;
    aMStack_15[0].m13 = MStack_14.m13;
    aMStack_15[0].m23 = MStack_14.m23;
    aMStack_15[0].m33 = MStack_14.m33;
    MStack_14.m00 = MStack_10.m00;
    MStack_14.m10 = MStack_10.m10;
    MStack_14.m20 = MStack_10.m20;
    MStack_14.m30 = MStack_10.m30;
    MStack_14.m01 = MStack_10.m01;
    MStack_14.m11 = MStack_10.m11;
    MStack_14.m21 = MStack_10.m21;
    MStack_14.m31 = MStack_10.m31;
    MStack_14.m02 = MStack_10.m02;
    MStack_14.m12 = MStack_10.m12;
    MStack_14.m22 = MStack_10.m22;
    MStack_14.m32 = MStack_10.m32;
    MStack_14.m03 = MStack_10.m03;
    MStack_14.m13 = MStack_10.m13;
    MStack_14.m23 = MStack_10.m23;
    MStack_14.m33 = MStack_10.m33;
    pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        (&MStack_10,&MStack_14,aMStack_15,(MethodInfo *)0x0);
    aMStack_15[0].m00 = pMVar16->m00;
    aMStack_15[0].m10 = pMVar16->m10;
    aMStack_15[0].m20 = pMVar16->m20;
    aMStack_15[0].m30 = pMVar16->m30;
    aMStack_15[0].m01 = pMVar16->m01;
    aMStack_15[0].m11 = pMVar16->m11;
    aMStack_15[0].m21 = pMVar16->m21;
    aMStack_15[0].m31 = pMVar16->m31;
    aMStack_15[0].m02 = pMVar16->m02;
    aMStack_15[0].m12 = pMVar16->m12;
    aMStack_15[0].m22 = pMVar16->m22;
    aMStack_15[0].m32 = pMVar16->m32;
    aMStack_15[0].m03 = pMVar16->m03;
    aMStack_15[0].m13 = pMVar16->m13;
    aMStack_15[0].m23 = pMVar16->m23;
    aMStack_15[0].m33 = pMVar16->m33;
    pPVar7 = UnityEngine.CoreModule.dll::UnityEngine::GeometryUtility::
              GeometryUtility_CalculateFrustumPlanes(aMStack_15,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._worldPlanes = pPVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._worldPlanes >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar17 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar17 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar17 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    CameraViewVolume_CalculateWorldPoints(this,camera,(MethodInfo *)0x0);
    pVVar1 = (this->fields)._worldPoints;
    if (pVVar1 != (Vector3__Array *)0x0) {
      if ((4 < (uint)pVVar1->max_length) && (5 < (uint)pVVar1->max_length)) {
        uVar18 = pVVar1->vector[4].x;
        uVar19 = pVVar1->vector[4].y;
        uStack_20._0_4_ = pVVar1->vector[5].x;
        uStack_20._4_4_ = pVVar1->vector[5].y;
        fStack_21 = pVVar1->vector[4].z - pVVar1->vector[5].z;
        uStack_22 = CONCAT44((float)uVar19 - uStack_20._4_4_,(float)uVar18 - (float)uStack_20);
        fVar9 = (float)FUN_?(&uStack_22);
        (this->fields)._farPlaneSize.x = fVar9;
        pVVar1 = (this->fields)._worldPoints;
        if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
        if ((4 < (uint)pVVar1->max_length) && (7 < (uint)pVVar1->max_length)) {
          uVar23 = pVVar1->vector[4].x;
          uVar24 = pVVar1->vector[4].y;
          uStack_20._0_4_ = pVVar1->vector[7].x;
          uStack_20._4_4_ = pVVar1->vector[7].y;
          fStack_21 = pVVar1->vector[4].z - pVVar1->vector[7].z;
          uStack_22 = CONCAT44((float)uVar24 - uStack_20._4_4_,(float)uVar23 - (float)uStack_20);
          fVar9 = (float)FUN_?(&uStack_22);
          (this->fields)._farPlaneSize.y = fVar9;
          pVVar1 = (this->fields)._worldPoints;
          if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
          if (((int)pVVar1->max_length != 0) && (1 < (uint)pVVar1->max_length)) {
            uVar25 = pVVar1->vector[0].x;
            uVar26 = pVVar1->vector[0].y;
            uStack_20._0_4_ = pVVar1->vector[1].x;
            uStack_20._4_4_ = pVVar1->vector[1].y;
            fStack_21 = pVVar1->vector[0].z - pVVar1->vector[1].z;
            uStack_22 = CONCAT44((float)uVar26 - uStack_20._4_4_,(float)uVar25 - (float)uStack_20);
            fVar9 = (float)FUN_?(&uStack_22);
            (this->fields)._nearPlaneSize.x = fVar9;
            pVVar1 = (this->fields)._worldPoints;
            if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
            if (((int)pVVar1->max_length != 0) && (3 < (uint)pVVar1->max_length)) {
              uVar27 = pVVar1->vector[0].x;
              uVar28 = pVVar1->vector[0].y;
              uStack_20._0_4_ = pVVar1->vector[3].x;
              uStack_20._4_4_ = pVVar1->vector[3].y;
              fStack_21 = pVVar1->vector[0].z - pVVar1->vector[3].z;
              uStack_22 = CONCAT44((float)uVar28 - uStack_20._4_4_,
                                    (float)uVar27 - (float)uStack_20);
              fVar9 = (float)FUN_?(&uStack_22);
              (this->fields)._nearPlaneSize.y = fVar9;
              AStack_29._center.y = 0.0;
              AStack_29._center.z = 0.0;
              AStack_29._isValid = 0;
              AStack_29._25_3_ = 0;
              AStack_29._size.x = 0.0;
              AStack_29._size.y = 0.0;
              AStack_29._size.z = 0.0;
              AStack_29._center.x = 0.0;
              AABB::AABB__ctor_2(&AStack_29,
                                 (IEnumerable_1_UnityEngine_Vector3_ *)(this->fields)._worldPoints,
                                 (MethodInfo *)0x0);
              bVar2 = cRam_? == '\0';
              (this->fields)._worldAABB._size.x = AStack_29._size.x;
              (this->fields)._worldAABB._size.y = AStack_29._size.y;
              (this->fields)._worldAABB._size.z = AStack_29._size.z;
              (this->fields)._worldAABB._center.x = AStack_29._center.x;
              (this->fields)._worldAABB._center.y = AStack_29._center.y;
              (this->fields)._worldAABB._center.z = AStack_29._center.z;
              (this->fields)._worldAABB._isValid = AStack_29._isValid;
              *(undefined3 *)&(this->fields)._worldAABB.field_0x19 = AStack_29._25_3_;
              fVar9 = (this->fields)._farPlaneSize.x;
              fVar30 = (this->fields)._farPlaneSize.y;
              if (bVar2) {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar11 = (camera->fields)._._._.m_CachedPtr;
              if (pvVar11 != (void *)0x0) {
                pcVar12 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pcRam_? = pcVar12;
                fVar31 = (float)(*pcRam_?)(pvVar11);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar11 = (camera->fields)._._._.m_CachedPtr;
                if (pvVar11 != (void *)0x0) {
                  pcVar12 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                    uVar13 = func_?(&UNK_?);
                    FUN_?(uVar13,0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcRam_? = pcVar12;
                  fVar32 = (float)(*pcRam_?)(pvVar11);
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)camera,(MethodInfo *)0x0);
                  if (this_00 == (Transform *)0x0) goto DAT_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_22 = 0;
                  fStack_21 = 0.0;
                  pvVar11 = (this_00->fields)._._.m_CachedPtr;
                  if (pvVar11 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcVar12 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                    uVar13 = func_?(&UNK_?);
                    FUN_?(uVar13,0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pcRam_? = pcVar12;
                  (*pcRam_?)(pvVar11,&uStack_22);
                  pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward(&AStack_29._size,this_00,(MethodInfo *)0x0);
                  uStack_20._0_4_ = pVVar33->x;
                  uStack_20._4_4_ = pVVar33->y;
                  fVar34 = pVVar33->z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar11 = (camera->fields)._._._.m_CachedPtr;
                  if (pvVar11 != (void *)0x0) {
                    pcVar12 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pcRam_? = pcVar12;
                    fVar35 = (float)(*pcRam_?)(pvVar11);
                    fVar35 = fVar35 + (fVar31 - fVar32) * _UNK_?;
                    fVar36 = (float)uStack_20 * fVar35 + (float)uStack_22;
                    fVar37 = uStack_20._4_4_ * fVar35 + uStack_22._4_4_;
                    fVar34 = fVar34 * fVar35 + fStack_21;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    AStack_29._size.x = 0.0;
                    AStack_29._size.y = 0.0;
                    AStack_29._size.z = 0.0;
                    AStack_29._center.x = 0.0;
                    pvVar11 = (this_00->fields)._._.m_CachedPtr;
                    if (pvVar11 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0)
                      ;
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pcVar12 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pcRam_? = pcVar12;
                    (*pcRam_?)(pvVar11,&AStack_29);
                    MStack_14.m21 = AStack_29._size.x;
                    MStack_14.m31 = AStack_29._size.y;
                    (this->fields)._worldOBB._size.x = fVar9;
                    (this->fields)._worldOBB._size.y = fVar30;
                    (this->fields)._worldOBB._size.z = fVar31 - fVar32;
                    (this->fields)._worldOBB._center.x = fVar36;
                    (this->fields)._worldOBB._center.y = fVar37;
                    (this->fields)._worldOBB._center.z = fVar34;
                    (this->fields)._worldOBB._rotation.x = MStack_14.m21;
                    (this->fields)._worldOBB._rotation.y = MStack_14.m31;
                    (this->fields)._worldOBB._rotation.z = AStack_29._size.z;
                    (this->fields)._worldOBB._rotation.w = AStack_29._center.x;
                    *(undefined4 *)&(this->fields)._worldOBB._isValid = 1;
                    return;
                  }
                }
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Plane get_BottomPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_BottomPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._worldPlanes;
  if (pPVar1 == (Plane__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (Plane *)(*pcVar2)();
    return pPVar3;
  }
  if (2 < (uint)pPVar1->max_length) {
    fVar4 = pPVar1->vector[2].m_Normal.y;
    uVar5 = *(undefined8 *)&pPVar1->vector[2].m_Normal.z;
    (__return_storage_ptr__->m_Normal).x = pPVar1->vector[2].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar4;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Plane *)(*pcVar2)();
  return pPVar3;
}


/* Vector3 get_FarBottomLeft() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarBottomLeft
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._worldPoints;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (7 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[7].y;
    fVar5 = pVVar1->vector[7].z;
    __return_storage_ptr__->x = pVVar1->vector[7].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector3 get_FarBottomRight() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarBottomRight
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._worldPoints;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (6 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[6].y;
    fVar5 = pVVar1->vector[6].z;
    __return_storage_ptr__->x = pVVar1->vector[6].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Plane get_FarPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._worldPlanes;
  if (pPVar1 == (Plane__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (Plane *)(*pcVar2)();
    return pPVar3;
  }
  if (5 < (uint)pPVar1->max_length) {
    fVar4 = pPVar1->vector[5].m_Normal.y;
    uVar5 = *(undefined8 *)&pPVar1->vector[5].m_Normal.z;
    (__return_storage_ptr__->m_Normal).x = pPVar1->vector[5].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar4;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Plane *)(*pcVar2)();
  return pPVar3;
}


/* Vector3 get_FarTopLeft() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarTopLeft
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._worldPoints;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (4 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[4].y;
    fVar5 = pVVar1->vector[4].z;
    __return_storage_ptr__->x = pVVar1->vector[4].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector3 get_FarTopRight() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_FarTopRight
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._worldPoints;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (5 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[5].y;
    fVar5 = pVVar1->vector[5].z;
    __return_storage_ptr__->x = pVVar1->vector[5].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Plane get_LeftPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_LeftPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._worldPlanes;
  if (pPVar1 == (Plane__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (Plane *)(*pcVar2)();
    return pPVar3;
  }
  if ((int)pPVar1->max_length != 0) {
    fVar4 = pPVar1->vector[0].m_Normal.y;
    uVar5 = *(undefined8 *)&pPVar1->vector[0].m_Normal.z;
    (__return_storage_ptr__->m_Normal).x = pPVar1->vector[0].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar4;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Plane *)(*pcVar2)();
  return pPVar3;
}


/* Vector3 get_NearBottomLeft() */

Vector3 * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearBottomLeft
                    (Vector3 *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._worldPoints;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (3 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[3].y;
    fVar5 = pVVar1->vector[3].z;
    __return_storage_ptr__->x = pVVar1->vector[3].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Plane get_NearPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._worldPlanes;
  if (pPVar1 == (Plane__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (Plane *)(*pcVar2)();
    return pPVar3;
  }
  if (4 < (uint)pPVar1->max_length) {
    fVar4 = pPVar1->vector[4].m_Normal.y;
    uVar5 = *(undefined8 *)&pPVar1->vector[4].m_Normal.z;
    (__return_storage_ptr__->m_Normal).x = pPVar1->vector[4].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar4;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Plane *)(*pcVar2)();
  return pPVar3;
}


/* Vector2 get_NearPlaneSize() */

Vector2 Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_NearPlaneSize
                  (CameraViewVolume *this,MethodInfo *method)

{
  return (this->fields)._nearPlaneSize;
}


/* Plane get_RightPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_RightPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._worldPlanes;
  if (pPVar1 == (Plane__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (Plane *)(*pcVar2)();
    return pPVar3;
  }
  if (1 < (uint)pPVar1->max_length) {
    fVar4 = pPVar1->vector[1].m_Normal.y;
    uVar5 = *(undefined8 *)&pPVar1->vector[1].m_Normal.z;
    (__return_storage_ptr__->m_Normal).x = pPVar1->vector[1].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar4;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Plane *)(*pcVar2)();
  return pPVar3;
}


/* Plane get_TopPlane() */

Plane * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_TopPlane
                  (Plane *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._worldPlanes;
  if (pPVar1 == (Plane__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pPVar3 = (Plane *)(*pcVar2)();
    return pPVar3;
  }
  if (3 < (uint)pPVar1->max_length) {
    fVar4 = pPVar1->vector[3].m_Normal.y;
    uVar5 = *(undefined8 *)&pPVar1->vector[3].m_Normal.z;
    (__return_storage_ptr__->m_Normal).x = pPVar1->vector[3].m_Normal.x;
    (__return_storage_ptr__->m_Normal).y = fVar4;
    *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = uVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (Plane *)(*pcVar2)();
  return pPVar3;
}


/* AABB get_WorldAABB() */

AABB * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_WorldAABB
                 (AABB *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  bVar1 = (this->fields)._worldAABB._isValid;
  uVar2 = *(undefined3 *)&(this->fields)._worldAABB.field_0x19;
  fVar3 = (this->fields)._worldAABB._size.y;
  uVar4 = *(undefined8 *)&(this->fields)._worldAABB._size.z;
  fVar5 = (this->fields)._worldAABB._center.y;
  fVar6 = (this->fields)._worldAABB._center.z;
  (__return_storage_ptr__->_size).x = (this->fields)._worldAABB._size.x;
  (__return_storage_ptr__->_size).y = fVar3;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar4;
  (__return_storage_ptr__->_center).y = fVar5;
  (__return_storage_ptr__->_center).z = fVar6;
  __return_storage_ptr__->_isValid = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar2;
  return __return_storage_ptr__;
}


/* OBB get_WorldOBB() */

OBB * Assembly-CSharp.dll::RTG::CameraViewVolume::CameraViewVolume_get_WorldOBB
                (OBB *__return_storage_ptr__,CameraViewVolume *this,MethodInfo *method)

{
  fVar1 = (this->fields)._worldOBB._size.y;
  uVar2 = *(undefined8 *)&(this->fields)._worldOBB._size.z;
  bVar3 = (this->fields)._worldOBB._isValid;
  uVar4 = *(undefined3 *)&(this->fields)._worldOBB.field_0x29;
  fVar5 = (this->fields)._worldOBB._center.y;
  fVar6 = (this->fields)._worldOBB._center.z;
  fVar7 = (this->fields)._worldOBB._rotation.x;
  fVar8 = (this->fields)._worldOBB._rotation.y;
  (__return_storage_ptr__->_size).x = (this->fields)._worldOBB._size.x;
  (__return_storage_ptr__->_size).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar2;
  fVar1 = (this->fields)._worldOBB._rotation.z;
  fVar9 = (this->fields)._worldOBB._rotation.w;
  (__return_storage_ptr__->_center).y = fVar5;
  (__return_storage_ptr__->_center).z = fVar6;
  (__return_storage_ptr__->_rotation).x = fVar7;
  (__return_storage_ptr__->_rotation).y = fVar8;
  (__return_storage_ptr__->_rotation).z = fVar1;
  (__return_storage_ptr__->_rotation).w = fVar9;
  __return_storage_ptr__->_isValid = bVar3;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar4;
  return __return_storage_ptr__;
}

