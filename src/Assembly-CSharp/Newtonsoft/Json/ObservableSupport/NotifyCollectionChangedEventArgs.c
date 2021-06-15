
/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, Object, Object, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_10
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               Object *newItem,Object *oldItem,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NotifyCollectionChangedEventArgs__ctor_2(this,action,newItem,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)oldItem,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    (this->fields)._OldItems_k__BackingField = (IList *)this_00;
    (this->fields)._NewStartingIndex_k__BackingField = index;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_2
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               Object *changedItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._Action_k__BackingField = action;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)changedItem,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    (this->fields)._NewItems_k__BackingField = (IList *)this_00;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, IList, IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_3
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               IList *newItems,IList *oldItems,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._Action_k__BackingField = action;
  (this->fields)._NewItems_k__BackingField = newItems;
  (this->fields)._OldItems_k__BackingField = oldItems;
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, Object, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_5
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               Object *changedItem,int32_t index,MethodInfo *method)

{
  NotifyCollectionChangedEventArgs__ctor_2(this,action,changedItem,(MethodInfo *)0x0);
  (this->fields)._NewStartingIndex_k__BackingField = index;
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_6
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               Object *newItem,Object *oldItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NotifyCollectionChangedEventArgs__ctor_2(this,action,newItem,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)oldItem,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    (this->fields)._OldItems_k__BackingField = (IList *)this_00;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, IList, IList, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_7
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               IList *newItems,IList *oldItems,int32_t startingIndex,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._Action_k__BackingField = action;
  (this->fields)._NewItems_k__BackingField = newItems;
  (this->fields)._OldItems_k__BackingField = oldItems;
  (this->fields)._NewStartingIndex_k__BackingField = startingIndex;
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, IList, Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_8
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               IList *changedItems,int32_t index,int32_t oldIndex,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._Action_k__BackingField = action;
  (this->fields)._NewItems_k__BackingField = changedItems;
  (this->fields)._NewStartingIndex_k__BackingField = index;
  (this->fields)._OldStartingIndex_k__BackingField = oldIndex;
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, Object, Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_9
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               Object *changedItem,int32_t index,int32_t oldIndex,MethodInfo *method)

{
  NotifyCollectionChangedEventArgs__ctor_2(this,action,changedItem,(MethodInfo *)0x0);
  (this->fields)._NewStartingIndex_k__BackingField = index;
  (this->fields)._OldStartingIndex_k__BackingField = oldIndex;
  return;
}

