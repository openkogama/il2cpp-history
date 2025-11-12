
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_Initialize
               (InstructionMessage *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Initialize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 1;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pTVar1 != (Text *)0x0) {
      pOVar3 = (Object *)0x0;
      if (pOVar2 != (Object *)0x0) {
        if (pOVar2->klass == pORam0000000182db2460) {
          pOVar3 = pOVar2;
        }
        if (pOVar3 == (Object *)0x0) {
          FUN_?(pOVar2,pORam0000000182db2460);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pOVar3,(pTVar1->klass->vtable).set_text.method);
      (this->fields).currentTime = 0.0;
      auStackX_8[0] = 2;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class)
        {
          FUN_?(pOVar2,TypeInfo__NotificationLifetime);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->fields).lifeTime = *(int32_t *)&pOVar2[1].klass;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar5 = StringLiteral_Initialize;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar6 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3,pSVar5);
          return;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_OnEnable
               (InstructionMessage *this,MethodInfo *method)

{
  obj = (this->fields).canvasGroup;
  this_00 = (this->fields).fadeCurve;
  if ((this_00 != (AnimationCurve *)0x0) &&
     (pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                         (this_00,(MethodInfo *)0x0), pKVar1 != (Keyframe__Array *)0x0)) {
    if ((int)pKVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (obj != (CanvasGroup *)0x0) {
      fVar3 = pKVar1->vector[0].m_Value;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,fVar3,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar4 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,fVar3);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_Update
               (InstructionMessage *this,MethodInfo *method)

{
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  fVar1 = (this->fields).currentTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  uVar3 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar4 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  fVar5 = (float)(*pcRam_?)();
  pIVar6 = this->klass;
  obj = (this->fields).canvasGroup;
  fVar5 = fVar5 + fVar1;
  obj_00 = (this->fields).fadeCurve;
  (this->fields).currentTime = fVar5;
  iVar7 = (*(pIVar6->vtable).get_Lifetime.methodPtr)(this);
  if (obj_00 != (AnimationCurve *)0x0) {
    pvVar8 = (obj_00->fields).m_Ptr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    uVar9 = (*pcRam_?)(pvVar8,fVar5 / (float)iVar7);
    if (obj != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,uVar9,0,in_R9,uVar3,uVar4,unaff_RBX);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar8 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar8,uVar9);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

