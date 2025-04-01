
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BestFlagTimeNotification::BestFlagTimeNotification_Initialize
               (BestFlagTimeNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BestFlagTimeNotification__DestroyNotification__);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  object = this;
  pAVar1 = (Action__Class *)(this->fields).timeText;
  (this->fields)._.timeSinceStart = 0.0;
  this = (BestFlagTimeNotification *)CONCAT13(1,this._0_3_);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pDVar2 = (Delegate *)func_?();
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__String,TVar3.m_Index);
    if (pAVar1 == (Action__Class *)0x0) goto code_?;
    TVar5.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar5 = TVar3;
      }
      if (TVar5.m_Index == 0) goto code_?;
    }
    pIVar6 = (pAVar1->_0).image;
    (*(code *)pIVar6[0x12].name)(pAVar1,TVar5.m_Index,pIVar6[0x12].nameNoExt);
    pAVar1 = (Action__Class *)(object->fields).fader;
    if (pAVar1 == (Action__Class *)0x0) goto code_?;
    (pAVar1->_0).castClass = (Il2CppClass *)(pAVar1->_0).this_arg.data;
    this_00 = (CanvasGroup *)(pAVar1->_0).byval_arg.data.typeHandle;
    *(undefined1 *)&(pAVar1->_0).this_arg.attrs = 1;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (pAVar1->_0).element_class = (Il2CppClass *)0x0;
    data = (Dictionary_2_System_Object_System_Object_ *)(object->fields).fader;
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    a = (Action *)(data->fields)._syncRoot;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,MethodInfo__BestFlagTimeNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pDVar2);
    if (pDVar2 == (Delegate *)0x0) {
      ppOVar7 = &(data->fields)._syncRoot;
      *ppOVar7 = (Object *)0x0;
      func_?(ppOVar7,0);
      return;
    }
    pDVar8 = (Delegate *)0x0;
    if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
      pDVar8 = pDVar2;
    }
    if (pDVar8 == (Delegate *)0x0) goto code_?;
    ppOVar7 = &(data->fields)._syncRoot;
    *ppOVar7 = (Object *)pDVar8;
    pDVar8 = (Delegate *)0x0;
    if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
      pDVar8 = pDVar2;
    }
    pAVar1 = TypeInfo__System__Action;
    if (pDVar8 != (Delegate *)0x0) {
      func_?(ppOVar7,pDVar8);
      return;
    }
  }
  uVar4 = func_?(pDVar2,pAVar1);
code_?:
  func_?(uVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

