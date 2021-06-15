
/* SentryErrorEvent(String, List`1[Sentry.Breadcrumb], String,
   Dictionary`2[System.String,System.String], Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::Sentry::SentryErrorEvent::SentryErrorEvent__ctor
               (SentryErrorEvent *this,String *message,List_1_Sentry_Breadcrumb_ *breadcrumbs,
               String *stackTrace,Dictionary_2_System_String_System_String_ *tags,
               Dictionary_2_System_String_System_Object_ *extra,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SentryEvent::SentryEvent__ctor
            ((SentryEvent *)this,message,tags,extra,breadcrumbs,(MethodInfo *)0x0);
  this_00 = (this->fields)._.extra;
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_error_stack_trace,
               (CrossPlatformInputManager_VirtualButton *)
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

