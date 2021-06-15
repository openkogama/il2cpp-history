
/* Void ShowChatBubble(String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleManager::ChatBubbleManager_ShowChatBubble
               (String *text,int32_t anchorId,ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Action_3_Object_Int32_Object_ *)
         TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble;
  if (this != (Action_3_Object_Int32_Object_ *)0x0) {
    System.Core.dll::System::Action`3[Object,Int32,Object]::Action_3_Object_Int32_Object__Invoke
              (this,(Object *)text,anchorId,(Object *)chatBubbleAnchor,
               MethodInfo__System__Action<System::String,_int,_ChatAnchor>__Invoke_System__String__int__ChatAnchor_
              );
  }
  return;
}

