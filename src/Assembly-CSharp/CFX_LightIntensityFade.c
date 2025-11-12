
/* Void OnEnable() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_OnEnable(CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).p_lifetime = 0.0;
  (this->fields).p_delay = (this->fields).delay;
  if ((this->fields).delay <= 0.0) {
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
  if (obj == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar2 = obj[1].klass;
  if (pOVar2 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pOVar2,0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_Start(CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
  if (obj == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = obj[1].klass;
  if (pOVar2 == (Object__Class *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)(pOVar2);
  (this->fields).baseIntensity = fVar4;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_Update(CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).p_delay;
  if (0.0 < fVar1) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar1 = fVar1 - fVar4;
    (this->fields).p_delay = fVar1;
    if (fVar1 <= 0.0) {
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
      if (obj_00 != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj_00 == (Object *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pOVar5 = obj_00[1].klass;
        if (pOVar5 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pOVar5,1);
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((this->fields).p_lifetime / (this->fields).duration < 1.0) {
      this_00 = (Light *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__);
      fVar4 = (this->fields).p_lifetime / (this->fields).duration;
      fVar1 = (this->fields).baseIntensity;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
      if (this_00 != (Light *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity(this_00,((this->fields).finalIntensity - fVar1) * fVar4 + fVar1,(MethodInfo *)0x0);
        fVar1 = (this->fields).p_lifetime;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        (this->fields).p_lifetime = fVar4 + fVar1;
        return;
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->fields).autodestruct != 0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
  return;
}

