
/* Void Execute() */

void Assembly-CSharp.dll::RTG::Light3DChangedAction::Light3DChangedAction_Execute
               (Light3DChangedAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  if (this_00 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_RecordAction(this_00,(IUndoRedoAction *)this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::Light3DChangedAction::Light3DChangedAction_Redo
               (Light3DChangedAction *this,MethodInfo *method)

{
  pLVar1 = (this->fields)._postChangeSnapshot;
  if (pLVar1 != (Light3DSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pLVar2 = (pLVar1->fields)._light;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pLVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pLVar2 = (pLVar1->fields)._light;
    if ((pLVar2 != (Light *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,(pLVar1->fields)._position,(MethodInfo *)0x0);
      pLVar2 = (pLVar1->fields)._light;
      if ((pLVar2 != (Light *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pLVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,(pLVar1->fields)._rotation,(MethodInfo *)0x0);
        pLVar2 = (pLVar1->fields)._light;
        if (pLVar2 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                    (pLVar2,(pLVar1->fields)._range,(MethodInfo *)0x0);
          pLVar2 = (pLVar1->fields)._light;
          if (pLVar2 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_spotAngle
                      (pLVar2,(pLVar1->fields)._spotAngle,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::Light3DChangedAction::Light3DChangedAction_Undo
               (Light3DChangedAction *this,MethodInfo *method)

{
  pLVar1 = (this->fields)._preChangeSnapshot;
  if (pLVar1 != (Light3DSnapshot *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pLVar2 = (pLVar1->fields)._light;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pLVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pLVar2 = (pLVar1->fields)._light;
    if ((pLVar2 != (Light *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,(pLVar1->fields)._position,(MethodInfo *)0x0);
      pLVar2 = (pLVar1->fields)._light;
      if ((pLVar2 != (Light *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pLVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,(pLVar1->fields)._rotation,(MethodInfo *)0x0);
        pLVar2 = (pLVar1->fields)._light;
        if (pLVar2 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                    (pLVar2,(pLVar1->fields)._range,(MethodInfo *)0x0);
          pLVar2 = (pLVar1->fields)._light;
          if (pLVar2 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_spotAngle
                      (pLVar2,(pLVar1->fields)._spotAngle,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Light3DChangedAction(Light3DSnapshot, Light3DSnapshot) */

void Assembly-CSharp.dll::RTG::Light3DChangedAction::Light3DChangedAction__ctor
               (Light3DChangedAction *this,Light3DSnapshot *preChangeSnapshot,
               Light3DSnapshot *postChangeSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Light3DSnapshot);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_01 = TypeInfo__RTG__Light3DSnapshot;
  value = (MethodInfo *)func_?();
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (preChangeSnapshot != (Light3DSnapshot *)0x0) {
    pLVar1 = (preChangeSnapshot->fields)._light;
    ((Light3DSnapshot__Fields *)&value->invoker_method)->_light = pLVar1;
    func_?((Light3DSnapshot__Fields *)&value->invoker_method,pLVar1);
    fVar2 = (preChangeSnapshot->fields)._position.y;
    pIVar3 = (Il2CppType *)(preChangeSnapshot->fields)._position.z;
    value->name = (char *)(preChangeSnapshot->fields)._position.x;
    value->klass = (Il2CppClass *)fVar2;
    value->return_type = pIVar3;
    _Var5 = (_union_154)(preChangeSnapshot->fields)._rotation.y;
    _Var6 = (_union_155)(preChangeSnapshot->fields)._rotation.z;
    fVar2 = (preChangeSnapshot->fields)._rotation.w;
    ((Quaternion *)&value->parameters)->x = (preChangeSnapshot->fields)._rotation.x;
    value->field7_0x1c = _Var5;
    value->field8_0x20 = _Var6;
    value->token = (uint32_t)fVar2;
    *(float *)&value->flags = (preChangeSnapshot->fields)._range;
    *(float *)&value->slot = (preChangeSnapshot->fields)._spotAngle;
    (this->fields)._preChangeSnapshot = (Light3DSnapshot *)value;
    func_?(&this->fields,value);
    value_00 = (Light3DSnapshot *)func_?(TypeInfo__RTG__Light3DSnapshot);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
    if (postChangeSnapshot != (Light3DSnapshot *)0x0) {
      pLVar1 = (postChangeSnapshot->fields)._light;
      (value_00->fields)._light = pLVar1;
      func_?(&value_00->fields,pLVar1);
      fVar4 = (postChangeSnapshot->fields)._position.y;
      fVar2 = (postChangeSnapshot->fields)._position.z;
      (value_00->fields)._position.x = (postChangeSnapshot->fields)._position.x;
      (value_00->fields)._position.y = fVar4;
      (value_00->fields)._position.z = fVar2;
      fVar2 = (postChangeSnapshot->fields)._rotation.y;
      fVar4 = (postChangeSnapshot->fields)._rotation.z;
      fVar5 = (postChangeSnapshot->fields)._rotation.w;
      (value_00->fields)._rotation.x = (postChangeSnapshot->fields)._rotation.x;
      (value_00->fields)._rotation.y = fVar2;
      (value_00->fields)._rotation.z = fVar4;
      (value_00->fields)._rotation.w = fVar5;
      (value_00->fields)._range = (postChangeSnapshot->fields)._range;
      (value_00->fields)._spotAngle = (postChangeSnapshot->fields)._spotAngle;
      (this->fields)._postChangeSnapshot = value_00;
      func_?(&(this->fields)._postChangeSnapshot,value_00);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

