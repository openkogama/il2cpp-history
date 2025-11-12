
/* Void Disable() */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_Disable(HoverCraftThruster *this,MethodInfo *method)

{
  pPVar1 = (this->fields).thrusterParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pcVar6 = pcRam_?;
    pPStackX_8 = pPVar1;
    pPStackX_18 = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(&pPStackX_18);
    pPVar1 = (this->fields).thrusterParticleSystem;
    if (pPVar1 != (ParticleSystem *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pPVar1->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar8);
      pPVar1 = (this->fields).thrusterParticleSystem;
      if ((pPVar1 != (ParticleSystem *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pPVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ToggleOnOff(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_ToggleOnOff(HoverCraftThruster *this,bool useThrusters,MethodInfo *method)

{
  pPVar1 = (this->fields).thrusterParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pcVar6 = pcRam_?;
    pPStackX_8 = pPVar1;
    pPStackX_20 = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(&pPStackX_20);
    pPVar1 = (this->fields).thrusterParticleSystem;
    if ((pPVar1 != (ParticleSystem *)0x0) &&
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar1,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,useThrusters,(MethodInfo *)0x0);
      pGVar8 = (this->fields).thrusterMesh;
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,useThrusters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateColor(Gradient) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_UpdateColor
               (HoverCraftThruster *this,Gradient *thrustersColor,MethodInfo *method)

{
  apPStackX_8[0] = (this->fields).thrusterParticleSystem;
  if (apPStackX_8[0] == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  PStack_6.m_ColorMax.b = 0.0;
  PStack_6.m_ColorMax.a = 0.0;
  PStack_6.m_Mode = 0;
  PStack_6._4_4_ = 0;
  PStack_6.m_GradientMin = (Gradient *)0x0;
  PStack_6.m_GradientMax = (Gradient *)0x0;
  PStack_6.m_ColorMin.r = 0.0;
  PStack_6.m_ColorMin.g = 0.0;
  PStack_6.m_ColorMin.b = 0.0;
  PStack_6.m_ColorMin.a = 0.0;
  PStack_6.m_ColorMax.r = 0.0;
  PStack_6.m_ColorMax.g = 0.0;
  PStackX_20.m_ParticleSystem = apPStackX_8[0];
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
  ParticleSystem_MinMaxGradient__ctor_1(&PStack_6,thrustersColor,(MethodInfo *)0x0);
  PStack_7.m_Mode = PStack_6.m_Mode;
  PStack_7._4_4_ = PStack_6._4_4_;
  PStack_7.m_GradientMin = PStack_6.m_GradientMin;
  PStack_7.m_GradientMax = PStack_6.m_GradientMax;
  PStack_7.m_ColorMin.r = PStack_6.m_ColorMin.r;
  PStack_7.m_ColorMin.g = PStack_6.m_ColorMin.g;
  PStack_7.m_ColorMin.b = PStack_6.m_ColorMin.b;
  PStack_7.m_ColorMin.a = PStack_6.m_ColorMin.a;
  PStack_7.m_ColorMax.r = PStack_6.m_ColorMax.r;
  PStack_7.m_ColorMax.g = PStack_6.m_ColorMax.g;
  PStack_7.m_ColorMax.b = PStack_6.m_ColorMax.b;
  PStack_7.m_ColorMax.a = PStack_6.m_ColorMax.a;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+ColorOverLifetimeModule::
  ParticleSystem_ColorOverLifetimeModule_set_color(&PStackX_20,&PStack_7,(MethodInfo *)0x0);
  return;
}


/* Void UpdateSize(Single) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_UpdateSize(HoverCraftThruster *this,float thrustersSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationCurve);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPStackX_8 = (this->fields).thrusterParticleSystem;
  if (pPStackX_8 == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  PStackX_20.m_ParticleSystem = pPStackX_8;
  curve = (AnimationCurve *)FUN_?();
  pvVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Internal_Create
                     ((Keyframe__Array *)0x0,(MethodInfo *)0x0);
  (curve->fields).m_Ptr = pvVar7;
  (curve->fields).m_RequiresNativeCleanup = 1;
  if (pvVar7 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar7,0,_UNK_?);
    pvVar7 = (curve->fields).m_Ptr;
    if (pvVar7 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar7,thrustersSize,0);
      PStack_9.m_Mode = 0;
      PStack_9.m_CurveMultiplier = 0.0;
      PStack_9.m_CurveMin = (AnimationCurve *)0x0;
      PStack_9.m_CurveMax = (AnimationCurve *)0x0;
      PStack_9.m_ConstantMin = 0.0;
      PStack_9.m_ConstantMax = 0.0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
      ParticleSystem_MinMaxCurve__ctor_1(&PStack_9,_UNK_?,curve,(MethodInfo *)0x0);
      PStack_10.m_Mode = PStack_9.m_Mode;
      PStack_10.m_CurveMultiplier = PStack_9.m_CurveMultiplier;
      PStack_10.m_CurveMin = PStack_9.m_CurveMin;
      PStack_10.m_CurveMax = PStack_9.m_CurveMax;
      PStack_10.m_ConstantMin = PStack_9.m_ConstantMin;
      PStack_10.m_ConstantMax = PStack_9.m_ConstantMax;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+SizeOverLifetimeModule::
      ParticleSystem_SizeOverLifetimeModule_set_size(&PStackX_20,&PStack_10,(MethodInfo *)0x0);
      return;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)curve,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

