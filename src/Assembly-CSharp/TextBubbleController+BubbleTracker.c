
/* Void Clear() */

void Assembly-CSharp.dll::TextBubbleController+BubbleTracker::
     TextBubbleController_BubbleTracker_Clear
               (TextBubbleController_BubbleTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Clear);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Clear,(MethodInfo *)0x0);
  pTVar1 = (this->fields).bubble;
  (this->fields).timeToLive = 0.0;
  (this->fields).currentLifeTime = 0.0;
  if (pTVar1 != (TextBubble *)0x0) {
    TextBubble::TextBubble_SetTransparancy(pTVar1,0.0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&StringLiteral_bubble_gameObject_transform_pare);
      func_?(&StringLiteral_Bubble_was_not_null);
      cRam_? = '\x01';
    }
    pTVar1 = (this->fields).bubble;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
code_?:
      (this->fields).bubble = (TextBubble *)0x0;
      func_?();
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Bubble_was_not_null,(MethodInfo *)0x0);
    pTVar1 = (this->fields).bubble;
    if (pTVar1 != (TextBubble *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar4,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)pTVar4,(MethodInfo *)0x0);
            pSVar5 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_bubble_gameObject_transform_pare,pSVar5,
                                (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            pTVar1 = (this->fields).bubble;
            if (pTVar1 != (TextBubble *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar1,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar3,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_Bubble(TextBubble) */

void Assembly-CSharp.dll::TextBubbleController+BubbleTracker::
     TextBubbleController_BubbleTracker_set_Bubble
               (TextBubbleController_BubbleTracker *this,TextBubble *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_bubble_gameObject_transform_pare);
    func_?(&StringLiteral_Bubble_was_not_null);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).bubble;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Bubble_was_not_null,(MethodInfo *)0x0);
    pTVar1 = (this->fields).bubble;
    if (pTVar1 != (TextBubble *)0x0) {
      value = (TextBubble *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pTVar1,(MethodInfo *)0x0);
      if (value != (TextBubble *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)value,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar3,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)pTVar3,(MethodInfo *)0x0);
            pSVar4 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_bubble_gameObject_transform_pare,pSVar4,
                                (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar4,(MethodInfo *)0x0);
            pTVar1 = (this->fields).bubble;
            if (pTVar1 != (TextBubble *)0x0) {
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar1,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)obj,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  (this->fields).bubble = value;
  func_?(&(this->fields).bubble,value);
  return;
}

