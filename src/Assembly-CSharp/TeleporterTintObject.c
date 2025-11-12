
/* Void Awake() */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_Awake
               (TeleporterTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRendererToTint;
  m = (Material__Array *)FUN_?(TypeInfo__UnityEngine__Material,1);
  pMVar2 = (this->fields).materialCylinderToTint;
  if (m != (Material__Array *)0x0) {
    if ((pMVar2 != (Material *)0x0) &&
       (lVar3 = FUN_?(pMVar2,(m->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(m,0);
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterialArray_1
                ((Renderer *)pMVar1,m,(MethodInfo *)0x0);
      pMVar1 = (this->fields).meshRendererToTint;
      if (pMVar1 != (MeshRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pMVar1->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        lVar3 = (*pcRam_?)(pvVar6);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) == 0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar7 = iRam_? != 0;
          (this->fields).materialCylinderToTint = *(Material **)(lVar3 + 0x20);
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).materialCylinderToTint >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_OnDestroy
               (TeleporterTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialCylinderToTint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pMVar1 != (Material *)0x0) {
    pvVar2 = (pMVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_TeamTint
               (TeleporterTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  pTVar1 = this->klass;
  if (team == MVTeam__Enum_Blue) {
    (*(pTVar1->vtable).Tint_1.methodPtr)
              (0,_UNK_?,_UNK_?,_UNK_?,0,(pTVar1->vtable).Tint_1.method);
    return;
  }
  if (team == MVTeam__Enum_Red) {
    (*(pTVar1->vtable).Tint_1.methodPtr)(this,_UNK_?,pTVar1,0,0);
    return;
  }
  if (team == MVTeam__Enum_Green) {
    pIVar2 = (pTVar1->vtable).Tint_1.methodPtr;
    (*pIVar2)(this,pIVar2,_UNK_?,0,0);
    return;
  }
  pIVar2 = (pTVar1->vtable).Tint_1.methodPtr;
  if (team != MVTeam__Enum_Yellow) {
    (*pIVar2)(0,pIVar2,_UNK_?,_UNK_?,0);
    return;
  }
  (*pIVar2)(this,pIVar2,_UNK_?,0,0);
  return;
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_Tint
               (TeleporterTintObject *this,Color *c,MethodInfo *method)

{
  this_00 = (this->fields).materialCylinderToTint;
  if (this_00 != (Material *)0x0) {
    CStack_1.r = c->r;
    CStack_1.g = c->g;
    CStack_1.b = c->b;
    CStack_1.a = c->a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,&CStack_1,(MethodInfo *)0x0);
    pPStackX_8 = (this->fields).particleCircleToTint;
    fVar2 = c->r * _UNK_?;
    fVar3 = c->g * _UNK_?;
    fVar4 = c->b * _UNK_?;
    if (pPStackX_8 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      CStack_1.g = fVar3;
      CStack_1.r = fVar2;
      CStack_1.a = 1.0;
      CStack_1.b = fVar4;
      PStackX_10.m_ParticleSystem = pPStackX_8;
      pPVar10 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
               ParticleSystem_MinMaxGradient_op_Implicit(&PStack_11,&CStack_1,(MethodInfo *)0x0);
      PStack_12.m_Mode = pPVar10->m_Mode;
      PStack_12._4_4_ = *(undefined4 *)&pPVar10->field_0x4;
      PStack_12.m_GradientMin = pPVar10->m_GradientMin;
      PStack_12.m_GradientMax = pPVar10->m_GradientMax;
      PStack_12.m_ColorMin.r = (pPVar10->m_ColorMin).r;
      PStack_12.m_ColorMin.g = (pPVar10->m_ColorMin).g;
      PStack_12.m_ColorMin.b = (pPVar10->m_ColorMin).b;
      PStack_12.m_ColorMin.a = (pPVar10->m_ColorMin).a;
      PStack_12.m_ColorMax.r = (pPVar10->m_ColorMax).r;
      PStack_12.m_ColorMax.g = (pPVar10->m_ColorMax).g;
      PStack_12.m_ColorMax.b = (pPVar10->m_ColorMax).b;
      PStack_12.m_ColorMax.a = (pPVar10->m_ColorMax).a;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor(&PStackX_10,&PStack_12,(MethodInfo *)0x0);
      obj = (this->fields).lightToTint;
      if (obj == (Light *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      CStack_1.r = c->r;
      CStack_1.g = c->g;
      CStack_1.b = c->b;
      CStack_1.a = c->a;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar14,&CStack_1);
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

