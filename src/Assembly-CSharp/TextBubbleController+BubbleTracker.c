
/* Void Clear() */

void Assembly-CSharp.dll::TextBubbleController+BubbleTracker::
     TextBubbleController_BubbleTracker_Clear
               (TextBubbleController_BubbleTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Clear,(MethodInfo *)0x0);
  pTVar1 = (this->fields).bubble;
  (this->fields).timeToLive = 0.0;
  (this->fields).currentLifeTime = 0.0;
  if ((pTVar1 != (TextBubble *)0x0) &&
     (this_00 = (pTVar1->fields).fadeGroup, this_00 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    TextBubbleController_BubbleTracker_set_Bubble(this,(TextBubble *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Bubble(TextBubble) */

void Assembly-CSharp.dll::TextBubbleController+BubbleTracker::
     TextBubbleController_BubbleTracker_set_Bubble
               (TextBubbleController_BubbleTracker *this,TextBubble *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).bubble;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Bubble_was_not_null,(MethodInfo *)0x0);
    pTVar1 = (this->fields).bubble;
    if (pTVar1 != (TextBubble *)0x0) {
      value = (TextBubble *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if (value != (TextBubble *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)value,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar3,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)pTVar3,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar4 = mscorlib.dll::System::String::String_Concat_2
                               (StringLiteral_bubble_gameObject_transform_pare,pSVar4,
                                (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar4,(MethodInfo *)0x0);
            pTVar1 = (this->fields).bubble;
            if (pTVar1 != (TextBubble *)0x0) {
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar1,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  return;
}

