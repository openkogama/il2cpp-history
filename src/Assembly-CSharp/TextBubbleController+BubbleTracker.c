
/* Void Clear() */

void Assembly-CSharp.dll::TextBubbleController+BubbleTracker::
     TextBubbleController_BubbleTracker_Clear
               (TextBubbleController_BubbleTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Clear);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Clear,(MethodInfo *)0x0);
  (this->fields).timeToLive = 0.0;
  (this->fields).currentLifeTime = 0.0;
  pTVar1 = (this->fields).bubble;
  if ((pTVar1 == (TextBubble *)0x0) ||
     (this_00 = (pTVar1->fields).fadeGroup, this_00 == (CanvasGroup *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,0.0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bubble_gameObject_transform_pare);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Bubble_was_not_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).bubble;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (TextBubble *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Bubble_was_not_null,(MethodInfo *)0x0);
      pTVar1 = (this->fields).bubble;
      if ((((pTVar1 != (TextBubble *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)
           ) && (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
                pTVar4 != (Transform *)0x0)) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar4,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                           ((Object_1 *)pTVar4,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_bubble_gameObject_transform_pare,pSVar5,(MethodInfo *)0x0)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        pTVar1 = (this->fields).bubble;
        if (pTVar1 != (TextBubble *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar3,0.0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  bVar6 = iRam_? != 0;
  (this->fields).bubble = (TextBubble *)0x0;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).bubble >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void set_Bubble(TextBubble) */

void Assembly-CSharp.dll::TextBubbleController+BubbleTracker::
     TextBubbleController_BubbleTracker_set_Bubble
               (TextBubbleController_BubbleTracker *this,TextBubble *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bubble_gameObject_transform_pare);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Bubble_was_not_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).bubble;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (TextBubble *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Bubble_was_not_null,(MethodInfo *)0x0);
      pTVar1 = (this->fields).bubble;
      if ((((pTVar1 != (TextBubble *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
           ) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                pTVar3 != (Transform *)0x0)) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar3,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                           ((Object_1 *)pTVar3,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_bubble_gameObject_transform_pare,pSVar4,(MethodInfo *)0x0)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        pTVar1 = (this->fields).bubble;
        if (pTVar1 != (TextBubble *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  bVar6 = iRam_? != 0;
  (this->fields).bubble = value;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).bubble >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

