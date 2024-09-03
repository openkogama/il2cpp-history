
/* Void Awake() */

void Assembly-CSharp.dll::LocalizedText::LocalizedText_Awake(LocalizedText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__LocalizedText__LanguageLoadedCallback__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__LocalizedText__LanguageLoadedCallback__,
               (MethodInfo *)0x0);
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::LocalizedText::LocalizedText_LanguageLoadedCallback
               (LocalizedText *this,MethodInfo *method)

{
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::LocalizedText::LocalizedText_Reset(LocalizedText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                   );
    func_?(&StringLiteral____Text__);
    func_?(&StringLiteral_____0___);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)this,
                              UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                             );
  (this->fields).text = pTVar1;
  func_?(&(this->fields).text,pTVar1);
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    bVar3 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (bVar3 == 0) {
      if (pTVar1 != (Text *)0x0) {
        arg0 = (Object *)
               (*(code *)(pTVar1->klass->vtable).get_text.method)
                         (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
        pSVar2 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_____0___,arg0,(MethodInfo *)0x0);
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        return;
      }
    }
    else if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,StringLiteral____Text__,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

