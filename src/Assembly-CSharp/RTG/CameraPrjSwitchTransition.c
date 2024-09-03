
/* Void Begin() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_Begin
               (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._targetMono;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pCVar3 = (this->fields)._targetCamera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pCVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if ((this->fields)._transitionType != 0) {
      pMVar1 = (this->fields)._targetMono;
      if (pMVar1 == (MonoBehaviour *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                (pMVar1,(this->fields)._transitionCrtn,(MethodInfo *)0x0);
      (this->fields)._transitionCrtn = (IEnumerator *)0x0;
      func_?();
      pCVar3 = (this->fields)._targetCamera;
      if ((pCVar3 == (Camera *)0x0) ||
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar3,(MethodInfo *)0x0), this_00 == (Transform *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,(this->fields)._camRestorePosition,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields)._targetMono;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    (this->fields)._transitionCrtn = (IEnumerator *)value;
    func_?(&(this->fields)._transitionCrtn,value);
    if (pMVar1 == (MonoBehaviour *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              (pMVar1,(IEnumerator *)value,(MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator DoTransition() */

IEnumerator *
Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_DoTransition
          (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* CameraPrjSwitchTransition() */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition__ctor
               (CameraPrjSwitchTransition *this,MethodInfo *method)

{
  (this->fields)._camFieldOfView = 60.0;
  (this->fields)._durationInSeconds = 0.23;
  return;
}


/* Void add_TransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_add_TransitionBegin
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).TransitionBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)func_?(&this->fields,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_TransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_add_TransitionEnd
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).TransitionEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)
             func_?(&(this->fields).TransitionEnd,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_TransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_add_TransitionUpdate
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchUpdateHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).TransitionUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchUpdateHandler *)
             func_?(&(this->fields).TransitionUpdate,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_TransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_remove_TransitionBegin
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).TransitionBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)func_?(&this->fields,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_TransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_remove_TransitionEnd
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).TransitionEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)
             func_?(&(this->fields).TransitionEnd,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_TransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_remove_TransitionUpdate
               (CameraPrjSwitchTransition *this,CameraProjectionSwitchUpdateHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).TransitionUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchUpdateHandler *)
             func_?(&(this->fields).TransitionUpdate,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_CamFieldOfView(Single) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_set_CamFieldOfView
               (CameraPrjSwitchTransition *this,float value,MethodInfo *method)

{
  if ((this->fields)._transitionType == 0) {
    (this->fields)._camFieldOfView = (float)((uint)value & _UNK_?);
  }
  return;
}


/* Void set_CamFocusPoint(Vector3) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_set_CamFocusPoint
               (CameraPrjSwitchTransition *this,Vector3 value,MethodInfo *method)

{
  if ((this->fields)._transitionType == 0) {
    (this->fields)._camFocusPoint.x = value.x;
    (this->fields)._camFocusPoint.y = value.y;
    (this->fields)._camFocusPoint.z = value.z;
  }
  return;
}


/* Void set_DurationInSeconds(Single) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::
     CameraPrjSwitchTransition_set_DurationInSeconds
               (CameraPrjSwitchTransition *this,float value,MethodInfo *method)

{
  if ((this->fields)._transitionType == 0) {
    fVar1 = _UNK_?;
    if (_UNK_? <= (float)((uint)value & _UNK_?)) {
      fVar1 = (float)((uint)value & _UNK_?);
    }
    (this->fields)._durationInSeconds = fVar1;
  }
  return;
}


/* Void set_TargetCamera(Camera) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_set_TargetCamera
               (CameraPrjSwitchTransition *this,Camera *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._transitionType == 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields)._targetCamera = value;
      func_?(&(this->fields)._targetCamera,value);
    }
  }
  return;
}


/* Void set_TargetMono(MonoBehaviour) */

void Assembly-CSharp.dll::RTG::CameraPrjSwitchTransition::CameraPrjSwitchTransition_set_TargetMono
               (CameraPrjSwitchTransition *this,MonoBehaviour *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._transitionType == 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields)._targetMono = value;
      func_?(&(this->fields)._targetMono,value);
    }
  }
  return;
}

