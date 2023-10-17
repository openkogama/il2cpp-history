
/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, Object, Object, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_10
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               Object *newItem,Object *oldItem,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    cRam_? = '\x01';
  }
  NotifyCollectionChangedEventArgs__ctor_2(this,action,newItem,(MethodInfo *)0x0);
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,oldItem,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    (this->fields)._OldItems_k__BackingField = (IList *)this_00;
    func_?(&(this->fields)._OldItems_k__BackingField);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._Action_k__BackingField = action;
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,changedItem,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    (this->fields)._NewItems_k__BackingField = (IList *)this_00;
    func_?(&(this->fields)._NewItems_k__BackingField,this_00);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._Action_k__BackingField = action;
  (this->fields)._NewItems_k__BackingField = newItems;
  func_?(&(this->fields)._NewItems_k__BackingField,newItems);
  (this->fields)._OldItems_k__BackingField = oldItems;
  func_?(&(this->fields)._OldItems_k__BackingField,oldItems);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    cRam_? = '\x01';
  }
  NotifyCollectionChangedEventArgs__ctor_2(this,action,newItem,(MethodInfo *)0x0);
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,oldItem,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    (this->fields)._OldItems_k__BackingField = (IList *)this_00;
    func_?(&(this->fields)._OldItems_k__BackingField);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._Action_k__BackingField = action;
  (this->fields)._NewItems_k__BackingField = newItems;
  func_?(&(this->fields)._NewItems_k__BackingField,newItems);
  (this->fields)._OldItems_k__BackingField = oldItems;
  func_?(&(this->fields)._OldItems_k__BackingField,oldItems);
  (this->fields)._NewStartingIndex_k__BackingField = startingIndex;
  return;
}


/* NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction, IList, Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::ObservableSupport::NotifyCollectionChangedEventArgs::
     NotifyCollectionChangedEventArgs__ctor_8
               (NotifyCollectionChangedEventArgs *this,NotifyCollectionChangedAction__Enum action,
               IList *changedItems,int32_t index,int32_t oldIndex,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._Action_k__BackingField = action;
  (this->fields)._NewItems_k__BackingField = changedItems;
  func_?(&(this->fields)._NewItems_k__BackingField,changedItems);
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

